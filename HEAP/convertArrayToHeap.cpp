
#include <iostream>
#include <vector>
using namespace std;
class maxheap
{
private: // v==heap
    vector<int> v;

public:
    void downheapify(int pi)
    {
        int n = v.size();
        while (true)
        {
            int largest = pi;
            int c1 = 2 * pi + 1; // Left child
            int c2 = 2 * pi + 2; // Right child

            // Check if left child exists and is greater than the current largest
            if (c1 < n && v[c1] > v[largest])
            {
                largest = c1;

            }

            // Check if right child exists and is greater than the current largest
            if (c2 < n && v[c2] > v[largest])
            {
                largest = c2;
            }

            // If the largest element is not the current parent (pi), swap them
            if (largest != pi)
            {
                swap(v[pi], v[largest]);
                pi = largest; // Move to the next level of the tree
            }
            else
            {
                break; // If the heap property is satisfied, break the loop
            }
        }
    }
    void display()
    {
        for (auto x : v)
            cout << x << " ";
        cout << endl;
    }
    void pop()
    {
        // remove the element of highest priority
        swap(v[v.size() - 1], v[0]);
        v.pop_back();
        // downheapify
        downheapify(0);
    }
    void upheapify(int ci)
    {
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            // pi=parent index
            //ci=child index
            if (v[pi] < v[ci]) //  yaha change karke min heap  ban jayegi
            {
                swap(v[pi], v[ci]);
                ci = pi;
            }
            else
                break;
        }
    }
    void append(int val)
    {
        v.push_back(val);
        upheapify(v.size() - 1);
    }
    maxheap(vector<int> arr)
    {
        v = arr;
        for (int i = arr.size()/2; i>=0; i--)
        {
            downheapify(i);
        } 
        
    }
};

int main()
{
    // vector<int> arr= {9,6,1,19,3,2,8,12,5};
    vector<int> arr = {2,8,5,3,9,1};
    maxheap h(arr);
    h.display();
    h.append(20);
    h.display();
    return 0;
}
