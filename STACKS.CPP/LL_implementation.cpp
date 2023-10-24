#include <iostream>
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
   
class Stack
{
public:
    Node* head;
    int size;
    // constructor
    Stack(){
        head =NULL;
        size=0;
    }
    void push(int val)
    {
        Node* temp =new Node(val);
        temp ->next=head;
        head=temp;
        size++;
    }
    void pop()
    {
        if(!head){
             cout<<"Stack is empty";
        }
        head=head->next;
        size--;
    }
    int top()
    {
        return head->val;
    }
    void display(){
        Node* temp =head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }

    }
    
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
   cout<< st.top()<<endl;
   st.display();
    return 0;
}