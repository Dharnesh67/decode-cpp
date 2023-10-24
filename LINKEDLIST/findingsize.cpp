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
int size(Node *head)
{
    Node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
        n++;
        temp = temp->next;
    }
    return n;
}
int main()
{
    // link list 10 20 30 40
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    cout << size(a);

    return 0;
}