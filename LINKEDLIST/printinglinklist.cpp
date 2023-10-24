#include <iostream>
#include <vector>    // some basics of classes
using namespace std; // it is important for linked list
class Node           // linked list node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val; // contructor
        this->next = NULL;
    }
};

int main()
{
    // link list 10 20 30 40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    // forming link list
    a.next = &b;
    b.next = &c;
    c.next = &d; // saving next addresss
    // cout<<a.val<<endl;
    // cout<<a.next->val<<endl;
    //  cout<<b.next->val<<endl;
    //   cout<<c.next->val<<endl;
    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl; // sirf a se saari value nikal li
    cout << a.next->next->next->val << endl;
    return 0;
}