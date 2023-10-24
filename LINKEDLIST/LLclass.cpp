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
class LinkList{ // user defined data structure like vector 
public:
    Node *head;
    Node* tail;
    int size;
    LinkList(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
        Node *temp =new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next =temp;
            tail =temp;
        }
        size++;
    }
    void display(){
    Node* temp =head;
    while (temp!=NULL)
    {cout<<temp->val<<endl;
    temp=temp->next;
    }
    cout<<size; // size;
    }
  
};
int main()
{
    LinkList ll;
    ll.insertatend(40);
    ll.insertatend(20);
    ll.insertatend(30);
    ll.insertatend(50);
    //  ll.insertatend(540);
    ll.display();
    return 0;
}