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
    void insertatend(int val){
        Node *temp =new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next =temp;
            tail =temp;
        }
        size++;
    }
    void insertatidx(int idx,int val){
        if(idx<0 or idx>size) return;
       else if(idx==0) {insertathead(val);
       return;}
       else if(idx==size) {insertatend(val);
       return;}
       else{ // beech valo ke liye
        Node* temp =head;
        Node* t =new Node(val);
        // traverse temp to idx -1
        for (int  i = 1; i <=idx-1; i++)
        {
            temp=temp->next;
        }
        
        t->next=temp->next;
        temp->next=t;
       }
    }
    void display(){
    Node* temp =head;
    while (temp!=NULL)
    {cout<<temp->val<<" ";
    temp=temp->next;
    }
    cout<<size; // size;
    }
  
};
int main()
{
    LinkList ll;
    ll.insertathead(40);
    ll.insertathead(20);
    ll.insertatend(30);
    ll.insertathead(50);
    ll.insertatidx(4,500); // insert 500 at 2nd index
    //  ll.insertatend(540);
    ll.display();
    return 0;
}