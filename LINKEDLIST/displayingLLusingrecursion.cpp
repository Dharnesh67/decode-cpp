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
void revdisplay(Node* head){
    if(head==NULL) return; // base case 
    revdisplay(head->next); // phle call 
    cout<<head->val <<" ";
    
}
void display(Node* head){
    if(head==NULL) return; // base case 
    cout<<head->val <<" ";
    display(head->next);
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
    display(a);
    cout<<endl;
    revdisplay(a);

    return 0;
}