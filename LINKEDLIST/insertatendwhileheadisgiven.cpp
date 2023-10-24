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
 void insertatend(Node* head,int val){
        Node* t = new Node(val);
       while(head->next!=NULL) head=head->next;
       head->next=t;

    }
// class LinkList{ // user defined data structure like vector 
// public:
//     Node *head;
//     Node* tail;
//     int size;
//     LinkList(){
//         head=tail=NULL;
//         size=0;
//     }
//     void insertatend(Node* head,int val){
//         Node* t = new Node(val);
//        while(head->next!=NULL) head=head->next;
//        head->next=t;


//     }
   
// };
int main()
{
    Node* a=new Node(10);
    display(a);
    insertatend(a,50);
  display(a);
   
    return 0;
}