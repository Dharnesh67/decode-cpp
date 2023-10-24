#include <iostream>
// #include <queue>
#include <stack>
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
class /*LinkList*/ queue{ // user defined data structure like vector 
public:
    Node *head;
    Node* tail;
    int s;
    queue(){
        head=tail=NULL;
        s=0;
    }
    void /*insertatend*/ push(int val){
        Node *temp =new Node(val);
        if(s==0) head=tail=temp;
        else{
            tail->next =temp;
            tail =temp;
        }
        s++;
    }
    void /*deleteathead*/ pop(){
        if(s==0){
            cout<<"Queue is empty";
            return;
        }
        Node*  temp =head;
        head=head->next;
        s--;
        delete(temp); // no wastage

    }
    int front(){
         if(s==0){
            cout<<"Queue is empty";
            // return;
        }
        return head->val;
    }
    int back(){
         if(s==0){
            cout<<"Queue is empty";
        }

        return tail->val;
    }
    void display(){
    Node* temp =head;
    while (temp!=NULL)
    {cout<<temp->val<<" ";
    temp=temp->next;
    }
    }
    int size(){
        cout<<endl;
        return s;
    }
  
};
int main()
{

    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    cout<<q.size();
    // q.display();
}