#include <iostream>
#include <vector>    
using namespace std; 
class Node{
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
void deleteatnode(Node* node,Node* head){
    if(head==node) head=head->next;
    Node* temp =head;
    while(temp->next!=node) temp =temp->next;
    temp->next=temp->next->next;

}
void deletewithval(int target,Node* head){
    if(head->val==target) {head=head->next;
    return ;}

    Node* temp =head;
    while(temp->next->val!=target) temp =temp->next;
    temp->next=temp->next->next;

}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    cout<<endl;
    deletewithval(30,a);
    // deleteatnode(c,a);
   display(a);
    return 0;
}