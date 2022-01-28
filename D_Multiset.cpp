#include <iostream>
using namespace std;
// heapArray class
class AHeap
{
protected:
    int *heapArray; // Pointer to the heapArray array
    int maxSize;    // Maximum size of the heapArray
    int n;          // Number of elements now in the heapArray
    // Helper function to put element in its correct place
    void shiftDown(int pos)
    {
        while (!isLeaf(pos))
        { // Stop if pos is a leaf
            int j = leftChild(pos);
            int rc = rightChild(pos);
            if ((rc < n) && (heapArray[rc] < heapArray[j]))
                j = rc; // Set j to greater child’s value
            if (heapArray[pos] < heapArray[j])
                return; // Done
            swap(heapArray[pos], heapArray[j]);
            pos = j; // Move down
        }
    }
    void shiftUp(int pos)
    {
        while (pos != 0 && (heapArray[pos] < heapArray[parent(pos)]))
        {
            swap(heapArray[pos], heapArray[parent(pos)]);
            pos = parent(pos); // Move down
        }
    }
    bool isLeaf(int pos) const // True if pos is a leaf
    {
        return (pos >= n / 2) && (pos < n);
    }
    int leftChild(int pos) const
    {
        return 2 * pos + 1;
    } // Return leftchild position
    int rightChild(int pos) const
    {
        return 2 * pos + 2;
    }                         // Return rightchild position
    int parent(int pos) const // Return parent position
    {
        return (pos - 1) / 2;
    }
    void expand()
    {
        int *temp = new int[maxSize + 1];
        for (int i = 0; i < maxSize; i++)
        {
            temp[i] = heapArray[i];
        }
        maxSize += 1;
        delete[] heapArray;
        heapArray = temp;
    }

public:
    AHeap(size_t max = 1)
    {
        maxSize = max;
        heapArray = new int[maxSize];
        cout << sizeof(*heapArray) * maxSize << endl;
        n = 0;
    }
    ~AHeap()
    {
        delete[] heapArray;
    }
    int size() const // Return current heapArray size
    {
        return n;
    }
    // Insert "it" into the heapArray
    void insert(const int &it)
    {
        if (n == maxSize)
        {
            expand();
        }
        n++;
        heapArray[n - 1] = it; // Start at end of heapArray
        // Now sift up until curr’s parent > curr
        shiftUp(n - 1);
    }
    // Remove first value
    int removeFirst()
    {
        swap(heapArray[0], heapArray[--n]); // Swap first with last value
        if (n != 0)
        {
            shiftDown(0); // shiftdown new root val
        }
        return heapArray[n]; // Return deleted value
    }
};
AHeap *x;
void eraseKthSmallest(int k)
{
    if (k <= x->size() && k > 0)
    {
        int tmp = x->removeFirst();
        eraseKthSmallest(k - 1);
        if (k > 1)
            x->insert(tmp);
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    x = new AHeap(1000000);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x->insert(a);
    }

    while (k--)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            eraseKthSmallest(-a);
        }
        else
        {
            x->insert(a);
        }
    }

    if (x->size() == 0)
    {
        cout << "0";
    }
    else
    {
        cout << x->removeFirst();
    }
    delete x;
}