#include <iostream>
#include <vector>
using namespace std;
class maxheap
{
private: // v==heap
    vector<int> v;
    int i;

public:
    void downheapify(int idx, int bound)
    {
        while (idx < bound)
        {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if (lc >= bound)
                break;
            int maxel = idx;
            if (v[maxel] < v[lc])
            {
                maxel = lc;
            }
            if (rc < bound and v[maxel] < v[rc])
            {
                maxel = rc;
                /* code */
            }
            if (maxel != idx)
            {
                swap(v[maxel], v[idx]);
                idx = maxel;
            }
            else
            {
                break;
            }
        }
    }
    void display()
    {

        for (int j = 0; j < i; j++)
        {
            cout << v[j] << " ";
        }
        cout << endl;
    }
    void pop()
    {
        // remove the element of highest priority
        swap(v[v.size() - 1], v[0]);
        // v.pop_back();
        i--;
        // downheapify
        downheapify(0, i);
    }
    void upheapify(int ci)
    {
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
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

    maxheap(vector<int> &arr)
    {
        v = arr;
        int n = arr.size();
        i = n;
        for (int j = arr.size() / 2; j >= 0; j--)
        {
            downheapify(j, i);
        }
    }
    void heapsort(vector<int> &arr)
    {
       int sz=arr.size();
        while(sz>0){ int el=0;
       swap(v[el],v[sz-1]);
       sz--;
       downheapify(0,sz);}
    }
};
void heapsort(vector<int> &arr)
{
    maxheap hp(arr);
    hp.heapsort(arr);
    hp.display();
}
int main()
{
    vector<int> arr = {9, 6, 1, 19, 3, 2, 8, 12, 5};
    heapsort(arr);
    return 0;
}
