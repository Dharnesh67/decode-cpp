#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev; // previous
    Node(int val)
    {
        this->val = val; // contructor
        this->next = NULL;
        this->prev = NULL;
    }
};
class deque
{
public:
    Node *head;
    Node *tail;
    int size;
    deque()
    {
        head = tail = NULL;
        size = 0;
    }
    void pushback(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail->prev = tail;
            tail = temp;
        }
        size++;
    }
    void pushfront(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void popfront()
    {
        if (size == 0)
        {
            cout << "deque is empty";
            return;
        }
        head = head->next;
        if (head)
            head->prev = NULL;
        if (!head)
            tail = NULL;
        size--;
    }
    void popback()
    {
        if (size == 0)
        {
            cout << "deque is empty";
            return;
        }
        else if (size == 1)
        {
            popfront();
            return;
        }
        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
        return;
    }
    void display()
    {
        Node *temp = head;
        while (head)
        {
            cout << head->val << " ";
            head = head->next;
        }
        head = temp;
        cout<<endl;
    }
};
int main()
{
    deque d;
    d.pushback(10);
    d.pushback(20);
    d.pushback(30);
    d.pushback(40);
    d.pushback(50);
    d.display();
    d.popback();
    d.popfront();
    d.display();
}