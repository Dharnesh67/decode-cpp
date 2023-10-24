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
    Node temp = a;
    while (true)
    {
        cout << temp.val << endl;
        if (temp.next == NULL)
            break;
        temp = (*temp.next);
    }
    return 0;
}