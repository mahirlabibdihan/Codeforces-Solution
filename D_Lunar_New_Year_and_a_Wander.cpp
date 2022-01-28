#include <iostream>
#include <map>
#include <vector>
#include <climits>
#include <queue>
using namespace std;

#ifndef __L_GRAPH__
#define __L_GRAPH__
#ifndef __GRAPH__
#define __GRAPH__
#define Assert(val, s)                             \
    if (!(val))                                    \
    {                                              \
        cout << "Assertion Failed: " << s << endl; \
        exit(-1);                                  \
    }
#define VISITED 1
#define UNVISITED 0
// Graph abstract class. This ADT assumes that the number
// of vertices is fixed when the graph is created.
class Graph
{
private:
    void operator=(const Graph &) {} // Protect assignment
    Graph(const Graph &) {}          // Protect copy constructor
public:
    Graph() {}          // Default constructor
    virtual ~Graph() {} // Base destructor
    // Initialize a graph of n vertices
    virtual void init(int n) = 0;
    // Return: the number of vertices and edges
    virtual int n() = 0;
    virtual int e() = 0;
    // Return v’s first neighbor
    virtual int first(int v) = 0;
    // Return v’s next neighbor
    virtual int next(int v, int w) = 0;
    // Set the weight for an edge
    // i, j: The vertices
    // wgt: Edge weight
    virtual void setEdge(int v1, int v2, int wght = 1) = 0;
    // Delete an edge
    // i, j: The vertices
    virtual void delEdge(int v1, int v2) = 0;
    // Determine if an edge is in the graph
    // i, j: The vertices
    // Return: true if edge i,j has non-zero weight
    virtual bool isEdge(int i, int j) = 0;
    // Return an edge’s weight
    // i, j: The vertices
    // Return: The weight of edge i,j, or zero
    virtual int weight(int v1, int v2) = 0;
    // Get and Set the mark value for a vertex
    // v: The vertex
    // val: The value to set
    virtual int getMark(int v) = 0;
    virtual void setMark(int v, int val) = 0;
};
void DFS(Graph *G, int v)
{ // Depth first search
    // PreVisit(G, v); // Take appropriate action
    G->setMark(v, VISITED);
    for (int w = G->first(v); w < G->n(); w = G->next(v, w))
    {
        if (G->getMark(w) == UNVISITED)
        {
            DFS(G, w);
        }
    }
    // PostVisit(G, v); // Take appropriate action
}
ostream &operator<<(ostream &os, Graph *g)
{
    for (int i = 0; i < g->n(); i++)
    {
        cout << i;
        int w = g->first(i);
        while (w != g->n())
        {
            cout << "->" << w << "[" << g->weight(i, w) << "]";
            w = g->next(i, w);
        }
        cout << endl;
    }
    return os;
}
#endif
#ifndef __A_LIST__
#define __A_LIST__
#include <iostream>
#ifndef __LIST__
#define __LIST__
#define Assert(val, s)                             \
    if (!(val))                                    \
    {                                              \
        cout << "Assertion Failed: " << s << endl; \
        exit(-1);                                  \
    }
template <typename E>
class List
{
private:
    void operator=(const List &) {} // Protect assignment
    List(const List &) {}           // Protect copy constructor
public:
    List() {}
    virtual ~List() {}
    virtual void clear() = 0;
    virtual void insert(const E &item) = 0;
    virtual void append(const E &item) = 0;
    virtual E remove() = 0;
    virtual void moveToStart() = 0;
    virtual void moveToEnd() = 0;
    virtual void prev() = 0;
    virtual void next() = 0;
    virtual int length() const = 0;
    virtual int currPos() const = 0;
    virtual void moveToPos(int pos) = 0;
    virtual const E &getValue() const = 0;
};
template <typename E>
int find(List<E> *lst, const E &item)
{
    int curr = lst->currPos();
    for (lst->moveToStart(); lst->currPos() < lst->length(); lst->next())
    {
        if (item == lst->getValue())
        {
            return lst->currPos();
        }
        if (lst->currPos() + 1 == lst->length())
        {
            break;
        }
    }
    lst->moveToPos(curr);
    return -1; // item not found
}
template <typename E>
ostream &operator<<(ostream &os, List<E> *lst)
{
    int curr = lst->currPos();
    os << "<";
    for (lst->moveToStart(); lst->currPos() < lst->length(); lst->next())
    {
        if (lst->currPos() == curr)
        {
            os << "| ";
        }
        os << lst->getValue() << ' ';

        if (lst->currPos() + 1 == lst->length())
        {
            break;
        }
    }
    lst->moveToPos(curr);
    os << ">";
    return os;
}
#endif
using namespace std;

// Array list implementation
template <typename E>
class AList : public List<E>
{
private:
    static const int defaultSize = 100;
    int chunk;
    int maxSize;
    int listSize;
    int curr;
    E *listArray;
    /*
        While expanding arraylist we have two choices:
        1. Increase by a constant size (maxSize=maxSize+chunk) -> Memory efficient
        2. Increase by a factor (maxSize=2*maxSize) -> Time efficient
    */
    void expand()
    {
        E *temp = new E[2 * maxSize];
        for (int i = 0; i < maxSize; i++)
        {
            temp[i] = listArray[i];
        }
        maxSize *= 2;
        delete[] listArray;
        listArray = temp;
    }

public:
    AList(int maxSize = defaultSize)
    { // Constructor
        chunk = this->maxSize = maxSize;
        listSize = curr = 0;
        listArray = new E[maxSize];
    }
    AList(int *arr, int listSize, int maxSize = defaultSize)
    { // Constructor
        chunk = this->maxSize = maxSize;
        this->listSize = listSize;
        curr = 0;
        listArray = new E[maxSize];
        for (int i = 0; i < listSize; i++)
        {
            listArray[i] = arr[i];
        }
    }
    ~AList()
    {
        delete[] listArray;
    }
    void clear()
    {
        delete[] listArray;
        listSize = curr = 0;
        listArray = new E[defaultSize];
    }
    void insert(const E &it)
    { // Insert "it" at current position
        if (listSize == maxSize)
        {
            // Reallocating memory to store more elements
            expand();
        }
        for (int i = listSize; i > curr; i--) // Shift elements up
        {
            listArray[i] = listArray[i - 1]; // to make room
        }

        listArray[curr] = it;
        listSize++; // Increment list size
    }
    void append(const E &it)
    { // Append "it"
        if (listSize == maxSize)
        {
            // Reallocating memory to store more elements
            expand();
        }
        listArray[listSize++] = it;
    }

    E remove()
    { // Remove and return the current element.
        Assert((curr >= 0) && (curr < listSize), "Empty list");
        E it = listArray[curr];
        for (int i = curr; i < listSize - 1; i++)
        {
            listArray[i] = listArray[i + 1];
        }
        listSize--;
        if (curr == listSize)
        {
            if (curr != 0)
            {
                curr--;
            }
        }
        return it;
    }
    void moveToStart()
    {
        curr = 0;
    }
    void moveToEnd()
    {
        curr = max(listSize - 1, 0);
    }
    void prev()
    {
        if (curr == 0)
        {
            cout << "Already at first position" << endl;
            return;
        }
        curr--;
    }
    void next()
    {
        if (curr == max(listSize - 1, 0))
        {
            cout << "Already at last position" << endl;
            return;
        }
        curr++;
    }
    int length() const
    {
        return listSize;
    }
    int currPos() const
    { // Return current position
        return curr;
    }
    void moveToPos(int pos)
    { // Set current list position to "pos"
        if (length() > 0 && ((pos < 0) || (pos >= listSize)))
        {
            cout << "Position out of range" << endl;
            return;
        }
        curr = pos;
    }
    const E &getValue() const
    { // Return current element
        Assert((curr >= 0) && (curr < listSize), "Empty list");
        return listArray[curr];
    }
};
#endif
#ifndef __EDGE__
#define __EDGE__
// Edge class for Adjacency List graph representation
class Edge
{
    int vert, wt;

public:
    Edge()
    {
        vert = -1;
        wt = -1;
    }
    Edge(int v, int w)
    {
        vert = v;
        wt = w;
    }
    int vertex() { return vert; }
    int weight() { return wt; }
};
#endif
class LGraph : public Graph
{
private:
    List<Edge> **vertex;    // List headers
    int numVertex, numEdge; // Number of vertices, edges
    int *mark;              // Pointer to mark array
public:
    LGraph(int numVert)
    {
        init(numVert);
    }
    ~LGraph()
    {                  // Destructor
        delete[] mark; // Return dynamically allocated memory
        for (int i = 0; i < numVertex; i++)
        {
            delete[] vertex[i];
        }
        delete[] vertex;
    }
    void init(int n)
    {
        int i;
        numVertex = n;
        numEdge = 0;
        mark = new int[n]; // Initialize mark array
        for (i = 0; i < numVertex; i++)
            mark[i] = UNVISITED;
        // Create and initialize adjacency lists
        vertex = new List<Edge> *[numVertex];
        for (i = 0; i < numVertex; i++)
        {
            vertex[i] = new AList<Edge>();
        }
    }
    int n() { return numVertex; } // Number of vertices
    int e() { return numEdge; }   // Number of edges
    int first(int v)
    { // Return first neighbor of "v"
        if (vertex[v]->length() == 0)
            return numVertex; // No neighbor
        vertex[v]->moveToStart();
        Edge it = vertex[v]->getValue();
        return it.vertex();
    }
    // Get v’s next neighbor after w
    int next(int v, int w)
    {
        Edge it;
        if (isEdge(v, w))
        {
            if ((vertex[v]->currPos() + 1) < vertex[v]->length())
            {
                vertex[v]->next();
                it = vertex[v]->getValue();
                return it.vertex();
            }
        }
        return n(); // No neighbor
    }
    // Set edge (u, v) to "weight"
    void setEdge(int u, int v, int weight = 1)
    {
        Assert(weight > 0, "May not set weight to 0");
        Edge currEdge(v, weight);
        if (isEdge(u, v))
        { // Edge already exists in graph
            vertex[u]->remove();
        }
        else
        { // Keep neighbors sorted by vertex index
            numEdge++;
            // for (vertex[u]->moveToStart(); vertex[u]->currPos() < vertex[u]->length(); vertex[u]->next())
            // {
            //     Edge temp = vertex[u]->getValue();
            //     if (temp.vertex() > v)
            //     {
            //         break;
            //     }
            //     if (vertex[u]->currPos() + 1 == vertex[u]->length())
            //     {
            //         break;
            //     }
            // }
        }
        vertex[u]->append(currEdge);
    }
    void delEdge(int u, int v)
    { // Delete edge (i, j)
        if (isEdge(u, v))
        {
            vertex[u]->remove();
            numEdge--;
        }
    }
    bool isEdge(int u, int v)
    { // Is (u,v) an edge?
        for (vertex[u]->moveToStart(); vertex[u]->currPos() < vertex[u]->length(); vertex[u]->next())
        { // Check whole list
            Edge temp = vertex[u]->getValue();
            if (temp.vertex() == v)
            {
                return true;
            }
            if (vertex[u]->currPos() + 1 == vertex[u]->length())
            {
                break;
            }
        }
        return false;
    }
    int weight(int u, int v)
    { // Return weight of (u, v)
        Edge curr;
        if (isEdge(u, v))
        {
            curr = vertex[u]->getValue();
            return curr.weight();
        }
        else
        {
            return 0;
        }
    }
    int getMark(int v) { return mark[v]; }
    void setMark(int v, int val) { mark[v] = val; }
};
#endif
//Compiler version g++ 6.3.0

vector<int> solve(Graph *adj, int n, int m)
{
    vector<int> res;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1); // Initialize Q
    while (!pq.empty())
    { // Process all vertices on Q
        int v, w;
        v = pq.top();
        pq.pop();
        res.push_back(v);
        adj->setMark(v, VISITED);
        for (w = adj->first(v); w < adj->n(); w = adj->next(v, w))
        {
            if (adj->getMark(w) == UNVISITED)
            {
                adj->setMark(w, VISITED);
                pq.push(w);
            }
        }
    }
    return res;
}
int main()
{
    int n, m;
    cin >> n >> m;
    Graph *adj = new LGraph(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj->setEdge(a, b);
        adj->setEdge(b, a);
    }
    vector<int> res = solve(adj, n, m);
    for (int i : res)
    {
        cout << i << " ";
    }
}