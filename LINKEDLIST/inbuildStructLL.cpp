#include <iostream>
using namespace std;
class stack
{
    struct node
    {
        int ele;
        struct node *next;
    };

public:
    struct node *head = nullptr;
    struct node *top = nullptr;
    void push(int a)
    {
        struct node *newp = new node();
        newp->ele = a;
        newp->next = nullptr;
        if (head == nullptr)
        {
            head = newp;
            top = head;
        }
        else
        {
            top->next = newp;
            top = newp;
        }
    }
    void disp()
    {
        if (head == nullptr)
            cout << "Stack empty\n";
        else
        {
            struct node *temp = head;
            while (temp->next != nullptr)
            {
                cout << temp->ele << " ";
                temp = temp->next;
            }
            cout << temp->ele << endl;
        }
    }
    void pop()
    {
        if (head == nullptr)
            cout << "Stack underflow\n";
        else
        {
            struct node *temp = head;
            if (temp->next == nullptr)
            {
                head = nullptr;
                top = head;
            }
            else
            {
                while (temp->next->next != nullptr)
                    temp = temp->next;

                top = temp;
                top->next = nullptr;
            }
        }
    }
    void top_ele()
    {
        cout << top->ele << "\n";
    }
};

int main()
{
    stack s;
    // s.top_ele(); //empty stack
    s.pop();
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.top_ele();
    s.pop();
    s.top_ele();
    return 0;
}