#include <iostream>
// #include <queue>
#include <stack>
using namespace std;
class queue
{
public:
    int f;
    int b;
    int arr[5];
    // int size = 0;
    queue(){
        f = 0;
        b = 0;
    }
    int size()
    {
        return b-f;
    }
    void push(int val)
    {
        if (b == 5)
            cout << "size overflow";
        arr[b] = val;
        b++;
        // size++;
    }
    void pop()
    {
        if (b-f== 0)
        {
            cout << " queue is empty! ";
            return;
        }
        f++;
        // size--;
    }
    int front()
    {
        return arr[f];
    }
    int back()
    {
        return arr[b-1];
    }
    void display(){
        for (int i = 0; i <b; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{

    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // q.push(60);
    q.display();
    cout<<q.size();
}