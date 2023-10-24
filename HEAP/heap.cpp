#include <iostream>
#include <vector>
using namespace std;
class maxheap
{
private:
    vector<int> v;

public:
    void downheapify( int pi) {
        int n =v.size();
    while (true) {
        int largest = pi;
        int c1 = 2 * pi + 1; // Left child
        int c2 = 2 * pi + 2; // Right child

        // Check if left child exists and is greater than the current largest
        if (c1 < n && v[c1] > v[largest]) {
            largest = c1;
        }

        // Check if right child exists and is greater than the current largest
        if (c2 < n && v[c2] > v[largest]) {
            largest = c2;
        }

        // If the largest element is not the current parent (pi), swap them
        if (largest != pi) {
            swap(v[pi], v[largest]);
            pi = largest; // Move to the next level of the tree
        } else {
            break; // If the heap property is satisfied, break the loop
        }
    }
}
    void display()
    {
        for (auto x : v)
            cout << x << " ";
        cout<<endl;
    }
    void pop(){
        // remove the element of highest priority
        swap(v[v.size()-1],v[0]);
        v.pop_back();
        // downheapify
        downheapify(0);
        
    }
    void upheapify(int ci)
    {
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (v[pi] < v[ci])  //  yaha change karke min heap  ban jayegi
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
};

int main()
{
    maxheap h;
    h.append(200);
    h.append(101);
    h.append(12);
    h.append(99);
    h.append(22);
    h.append(100);
    h.append(10);
    h.append(9);
    h.append(11);
    h.append(13);
    h.append(8);
    h.append(300);
    h.display();
    h.pop();
    h.display();
    return 0;
}
