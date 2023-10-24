#include <iostream>
#include <vector>
using namespace std;
class Node
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
int sij(Node *head)
{
    Node *temp = head;
    int si = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        si++;
    }
    return si;
}
Node *removeNthFromEnd(Node *head, int n)
{
    int size = sij(head);
    Node *temp = head;
    for (int i = 0; i <size-n-1; i++)
       {
        temp=temp->next;
       }
    temp->next = temp->next->next;
    return head;
}

// class Solution { // SLOW FAST ALGORITHM
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* slow =head;
//        ListNode* fast =head;
       
//        for(int i=1;i<=n+1;i++){
//            if(fast==NULL) return head->next;
//            fast= fast ->next;  // traverse fast to +1
//        }
//        while(fast!=NULL){
//            slow =slow->next;
//            fast =fast->next; // ab dono ko  chalao
//        }
//        slow->next =slow->next->next; // now the slow pointer is just left of node we want to delete
//        return head;
//     }
// };

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
    cout << endl;
    display(removeNthFromEnd(a, 2));
    return 0;
}