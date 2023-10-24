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
    void insertathead(int val){
        Node *temp =new Node(val);
       if(size==0) head=tail=temp;
       else{
        temp->next=head;
        head =temp;
       }
       size++;
    }
    void display(){
    Node* temp =head;
    while (temp!=NULL)
    {cout<<temp->val<<endl;
    temp=temp->next;
    }
    cout<<size<<" size"<<endl; // size;
    }
    void deleteatidx(int idx){
        Node* temp =head;
        for (int i = 0; i <idx-1; i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        
    }
  
};

int main()
{
    LinkList ll;
    ll.insertathead(40);
    ll.insertathead(20);
    ll.insertathead(30);
    ll.insertathead(50);
    //  ll.insertatend(540);
    ll.display();
    ll.deleteatidx(2);
    ll.display();
    return 0;
}