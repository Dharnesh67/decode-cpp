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
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    // link list 10 20 30 40
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    // traversinig is easy in this
    display(a);
    // Node *temp = a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp =temp->next;
    // }

    return 0;
}