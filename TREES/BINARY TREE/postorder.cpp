#include <iostream>
#include <climits>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    { // CONSTRUCTOR
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void preorder(Node *Root)
{
    if (Root == NULL)
        return;
    cout << Root->val << " "; // work
    preorder(Root->left);     // call 1
    preorder(Root->right);    // call 2
}

void inorder(Node *Root)
{
    if (Root == NULL)
        return;

    inorder(Root->left);      // call 1
    cout << Root->val << " "; // work
    inorder(Root->right);     // call 2
}
void postorder(Node *Root)
{
    if (Root == NULL)
        return;

    postorder(Root->left);    // call 1
    postorder(Root->right);   // call 2
    cout << Root->val << " "; // work
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // g->left=h;
    preorder(a);
    cout << endl;
    inorder(a);
    cout << endl;
    postorder(a);
}