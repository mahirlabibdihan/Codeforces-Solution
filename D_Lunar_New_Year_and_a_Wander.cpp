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
#ifndef __D_L_LIST__
#define __D_L_LIST__
#include <iostream>
#ifndef __D_LINK__
#define __D_LINK__
// Doubly linked list node
#ifndef __LINK__
#define __LINK__
#include <iostream>
using namespace std;
// Singly linked list node
/*template <typename T>
class Link
{
public:
    T value;
    Link *next;
    // Constructors
    Link(Link *nextval = NULL)
    {
        next = nextval;
    }
    Link(const T &value, Link *next = NULL)
    {
        this->value = value;
        this->next = next;
    }
};*/
// Singly linked list node with freelist support
template <typename E>
class Link
{
protected:
    static Link<E> *freelist; // Reference to freelist head
public:
    E element;     // Value for this node
    Link<E> *next; // Point to next node in list
    // Constructors
    Link() {}
    virtual ~Link() {}
    // Overloaded delete operator
    void operator delete(void *ptr)
    {
        ((Link<E> *)ptr)->next = freelist; // Put on freelist
        freelist = (Link<E> *)ptr;
    }
    static void clearFreeList()
    {
        while (freelist != NULL)
        {
            Link<E> *temp = freelist; // Can take from freelist
            freelist = freelist->next;
            ::delete temp;
        }
    }
};
// The freelist head pointer is actually created here
template <typename E>
Link<E> *Link<E>::freelist = NULL;
#endif
template <typename E>
class DLink : public Link<E>
{
public:
    Link<E> *prev; // Pointer to previous node
    // Constructors
    DLink(const E &it, Link<E> *prevp, Link<E> *nextp)
    {
        this->element = it;
        this->prev = prevp;
        this->next = nextp;
    }
    DLink(Link<E> *prevp = NULL, Link<E> *nextp = NULL)
    {
        this->prev = prevp;
        this->next = nextp;
    }
    void *operator new(size_t t)
    { // Overloaded new operator
        if (Link<E>::freelist == NULL)
            return ::new DLink<E>();       // Create space
        Link<E> *temp = Link<E>::freelist; // Can take from freelist
        Link<E>::freelist = Link<E>::freelist->next;
        return temp; // Return the link
    }
};
#endif
#ifndef __L_LIST__
#define __L_LIST__
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
/*
In this implementation we are actually pointing the previous node of the current element.
Because when we will remove an element we will need the pointer to the previous node.
We can get the previous node also by traversing from the beginning but that will take extra O(n) time.
To avoid that we will always point to the previous node.
So, when when current element is the first one we have to point to the previous node. 
So we need to take an extra head node. This node will be available in the empty list.
*/
/* 
Assume,curr pointer = ^
            head->[0th element]->[1th]->[2th]->........->tail[n-1 th]->NULL
Currpos=0:   ^
Currpos=1:              ^
Remove:     head->[0th element]->[2th]->........->[n-2 th]->tail[n-1 th]->NULL
            head->[0th element]->[1th]->........->[n-2 th]->tail[n-1 th]->NULL
                        ^
Insert:     head->[0th element]->[1th]->[2th]->........->[n-2 th]->tail[n-1 th]->NULL
                        ^
Currpos=n-1:                                                  ^
Remove:     head->[0th element]->[1th]->[2th]->........->[n-3th]->tail[n-2 th]->NULL
                                                                            ^
            head->[0th element]->[1th]->[2th]->........->[n-2th]->tail[n-1 th]->NULL
                                                              ^      (curr pointer steps back.If the next node of curr pointer is NULL,then remove operation will be failed.)
                                                     

*/
// Linked list implementation
template <typename E>
class LList : public List<E>
{
protected:
    int listSize;
    Link<E> *head;
    Link<E> *tail;
    Link<E> *curr;
    void init()
    { // Intialization helper method
        listSize = 0;
    }
    void removeAll()
    { // Return link nodes to free store
        while (head != NULL)
        {
            curr = head;
            head = head->next;
            delete curr;
        }
    }

public:
    LList()
    {
        init();
    }
    virtual ~LList()
    {
        // Link<E>::clearFreeList();
        removeAll();
    }
    void moveToStart() // Place curr at list start
    {
        curr = head;
    }
    // Move curr one step right; no change if already at end
    int length() const
    {
        return listSize;
    }
    int currPos() const
    { // Return the position of the current element
        Link<E> *temp = head;
        int i;
        for (i = 0; curr != temp; i++)
        {
            temp = temp->next;
        }
        return i;
    }
    void moveToPos(int pos)
    { // Move down list to "pos" position
        if ((pos < 0) || (pos >= listSize))
        {
            cout << "Position out of range" << endl;
            return;
        }
        curr = head;
        for (int i = 0; i < pos; i++)
        {
            curr = curr->next;
        }
    }
    const E &getValue() const
    { // Return current element
        Assert(curr->next != NULL, "Empty list");
        return curr->next->element;
    }
};
#endif

using namespace std;
// Doubly Linked list implementation
template <typename E>
class DLList : public LList<E>
{
private:
    void init()
    { // Intialization helper method
        LList<E>::init();
        this->curr = this->head = new DLink<E>();
        this->tail = new DLink<E>();
        this->head->next = this->tail;
        ((DLink<E> *)this->tail)->prev = this->head;
    }

public:
    DLList(int maxSize = 0)
    {
        init();
    }
    DLList(int *arr, int listSize, int maxSize = 0)
    {
        init();
        // Copying elements form array to list
        for (int i = 0; i < listSize; i++)
        {
            this->append(arr[i]);
        }
    }
    ~DLList()
    {
    }
    void clear()
    {
        this->removeAll();
        init();
    }
    void next()
    {
        if (this->curr->next->next == this->tail)
        {
            cout << "Already at last position" << endl;
            return;
        }
        this->curr = this->curr->next;
    }
    // Insert "it" at current position
    void insert(const E &it)
    {
        this->curr->next =
            ((DLink<E> *)this->curr->next)->prev =
                new DLink<E>(it, this->curr, this->curr->next);
        this->listSize++;
    }
    void append(const E &it)
    {
        ((DLink<E> *)this->tail)->prev =
            ((DLink<E> *)this->tail)->prev->next =
                new DLink<E>(it, ((DLink<E> *)this->tail)->prev, this->tail);
        this->listSize++;
    }
    // Remove and return current element
    E remove()
    {
        Assert(this->curr->next != this->tail, "Empty List"); // Nothing to remove
        E it = this->curr->next->element;                     // Remember value
        Link<E> *ltemp = this->curr->next;                    // Remember link node
        ((DLink<E> *)this->curr->next->next)->prev = this->curr;
        this->curr->next = this->curr->next->next; // Remove from list
        delete ltemp;                              // Reclaim space
        this->listSize--;                          // Decrement cnt
        if (this->curr->next == this->tail)        // If the last element is deleted, this->curr pointer will step back
        {
            if (this->curr != this->head) // Until it was also the first element. because if first element got deleted we can't step back
            {
                this->prev();
            }
        }
        return it;
    }
    // Move fence one step left; no change if left is empty
    void prev()
    {
        if (this->curr == this->head) // Can’t back up from list this->head
        {
            cout << "Already at first position" << endl;
            return; // No previous element
        }
        this->curr = ((DLink<E> *)this->curr)->prev;
    }
    void moveToEnd() // Place curr at list end
    {
        this->curr = ((DLink<E> *)this->tail)->prev;
        if (this->curr != this->head)
        {
            this->prev();
        }
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
            vertex[i] = new DLList<Edge>();
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
            for (vertex[u]->moveToStart(); vertex[u]->currPos() < vertex[u]->length(); vertex[u]->next())
            {
                Edge temp = vertex[u]->getValue();
                if (temp.vertex() > v)
                {
                    break;
                }
                if (vertex[u]->currPos() + 1 == vertex[u]->length())
                {
                    break;
                }
            }
        }
        vertex[u]->insert(currEdge);
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
#ifndef __S_L_LIST__
#define __S_L_LIST__
#include <iostream>
#ifndef __S_LINK__
#define __S_LINK__
#include <cstddef>
// Singly linked list node
#ifndef __LINK__
#define __LINK__
#include <iostream>
using namespace std;
// Singly linked list node
/*template <typename T>
class Link
{
public:
    T value;
    Link *next;
    // Constructors
    Link(Link *nextval = NULL)
    {
        next = nextval;
    }
    Link(const T &value, Link *next = NULL)
    {
        this->value = value;
        this->next = next;
    }
};*/
// Singly linked list node with freelist support
template <typename E>
class Link
{
protected:
    static Link<E> *freelist; // Reference to freelist head
public:
    E element;     // Value for this node
    Link<E> *next; // Point to next node in list
    // Constructors
    Link() {}
    virtual ~Link() {}
    // Overloaded delete operator
    void operator delete(void *ptr)
    {
        ((Link<E> *)ptr)->next = freelist; // Put on freelist
        freelist = (Link<E> *)ptr;
    }
    static void clearFreeList()
    {
        while (freelist != NULL)
        {
            Link<E> *temp = freelist; // Can take from freelist
            freelist = freelist->next;
            ::delete temp;
        }
    }
};
// The freelist head pointer is actually created here
template <typename E>
Link<E> *Link<E>::freelist = NULL;
#endif
template <typename E>
class SLink : public Link<E>
{
public:
    // Constructors
    SLink(Link<E> *nextp = NULL) { this->next = nextp; }
    SLink(const E &it, Link<E> *nextp = NULL)
    {
        this->element = it;
        this->next = nextp;
    }
    void *operator new(size_t t)
    { // Overloaded new operator
        if (Link<E>::freelist == NULL)
            return ::new SLink<E>();       // Create space
        Link<E> *temp = Link<E>::freelist; // Can take from freelist
        Link<E>::freelist = Link<E>::freelist->next;
        return temp; // Return the link
    }
};
#endif
#ifndef __L_LIST__
#define __L_LIST__
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
/*
In this implementation we are actually pointing the previous node of the current element.
Because when we will remove an element we will need the pointer to the previous node.
We can get the previous node also by traversing from the beginning but that will take extra O(n) time.
To avoid that we will always point to the previous node.
So, when when current element is the first one we have to point to the previous node. 
So we need to take an extra head node. This node will be available in the empty list.
*/
/* 
Assume,curr pointer = ^
            head->[0th element]->[1th]->[2th]->........->tail[n-1 th]->NULL
Currpos=0:   ^
Currpos=1:              ^
Remove:     head->[0th element]->[2th]->........->[n-2 th]->tail[n-1 th]->NULL
            head->[0th element]->[1th]->........->[n-2 th]->tail[n-1 th]->NULL
                        ^
Insert:     head->[0th element]->[1th]->[2th]->........->[n-2 th]->tail[n-1 th]->NULL
                        ^
Currpos=n-1:                                                  ^
Remove:     head->[0th element]->[1th]->[2th]->........->[n-3th]->tail[n-2 th]->NULL
                                                                            ^
            head->[0th element]->[1th]->[2th]->........->[n-2th]->tail[n-1 th]->NULL
                                                              ^      (curr pointer steps back.If the next node of curr pointer is NULL,then remove operation will be failed.)
                                                     

*/
// Linked list implementation
template <typename E>
class LList : public List<E>
{
protected:
    int listSize;
    Link<E> *head;
    Link<E> *tail;
    Link<E> *curr;
    void init()
    { // Intialization helper method
        listSize = 0;
    }
    void removeAll()
    { // Return link nodes to free store
        while (head != NULL)
        {
            curr = head;
            head = head->next;
            delete curr;
        }
    }

public:
    LList()
    {
        init();
    }
    virtual ~LList()
    {
        // Link<E>::clearFreeList();
        removeAll();
    }
    void moveToStart() // Place curr at list start
    {
        curr = head;
    }
    // Move curr one step right; no change if already at end
    int length() const
    {
        return listSize;
    }
    int currPos() const
    { // Return the position of the current element
        Link<E> *temp = head;
        int i;
        for (i = 0; curr != temp; i++)
        {
            temp = temp->next;
        }
        return i;
    }
    void moveToPos(int pos)
    { // Move down list to "pos" position
        if ((pos < 0) || (pos >= listSize))
        {
            cout << "Position out of range" << endl;
            return;
        }
        curr = head;
        for (int i = 0; i < pos; i++)
        {
            curr = curr->next;
        }
    }
    const E &getValue() const
    { // Return current element
        Assert(curr->next != NULL, "Empty list");
        return curr->next->element;
    }
};
#endif

using namespace std;
// Linked list implementation
template <typename E>
class SLList : public LList<E>
{
private:
    void init()
    { // Intialization helper method
        LList<E>::init();
        this->curr = this->tail = this->head = new SLink<E>;
    }

public:
    SLList(int maxSize = 0)
    {
        init();
    }
    SLList(int *arr, int listSize, int maxSize = 0)
    {
        init();
        // Copying elements form array to list
        for (int i = 0; i < listSize; i++)
        {
            this->append(arr[i]);
        }
    }
    ~SLList()
    {
    }
    void clear()
    {
        this->removeAll();
        init();
    }
    void next()
    {
        if (this->curr->next == this->tail)
        {
            cout << "Already at last position" << endl;
            return;
        }
        this->curr = this->curr->next;
    }
    void insert(const E &it)
    { // Insert "it" at current position
        this->curr->next = new SLink<E>(it, this->curr->next);
        this->listSize++;
    }
    void append(const E &it)
    { // Append "it" to list
        this->tail = this->tail->next = new SLink<E>(it);
        this->listSize++;
    }
    E remove()
    {
        // Remove and return current element
        Assert(this->curr->next != NULL, "Empty List"); // Next node of this->curr pointer is NULL. This is only possible when the list is empty.
        E it = this->curr->next->element;               // Remember element
        Link<E> *ltemp = this->curr->next;              // Remember link node
        if (this->tail == this->curr->next)
        {
            this->tail = this->curr; // If we are deleting the last element(which is also this->tail),the this->tail pointer will step back
        }
        this->curr->next = this->curr->next->next;
        delete ltemp;
        this->listSize--;
        if (this->curr->next == NULL) // If the last element is deleted, this->curr pointer will step back
        {
            if (this->curr != this->head) // Until it was also the first element. because if first element got deleted we can't step back
            {
                this->prev();
            }
        }
        return it;
    }
    void prev()
    { // Move this->curr one step left; no change if already at front
        if (this->curr == this->head)
        {
            cout << "Already at first position" << endl;
            return; // No previous element
        }
        Link<E> *temp = this->head;
        // March down list until we find the previous element
        while (temp->next != this->curr)
        {
            temp = temp->next;
        }
        this->curr = temp;
    }
    void moveToEnd() // Place curr at list end
    {
        this->curr = this->tail;
        if (this->curr != this->head)
        {
            this->prev();
        }
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
            vertex[i] = new SLList<Edge>();
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
            for (vertex[u]->moveToStart(); vertex[u]->currPos() < vertex[u]->length(); vertex[u]->next())
            {
                Edge temp = vertex[u]->getValue();
                if (temp.vertex() > v)
                {
                    break;
                }
                if (vertex[u]->currPos() + 1 == vertex[u]->length())
                {
                    break;
                }
            }
        }
        vertex[u]->insert(currEdge);
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