#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    // push
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    cout << q.front() << " ";
    cout << q.back();
    // pop
    // front
    // back
    // empty
    cout << endl;
    int i = 0;
    while (i < q.size())
    { // display
        int a = q.front();
        cout << q.front() << " ";
        q.pop();
        q.push(a);
        i++;
    }
   
}