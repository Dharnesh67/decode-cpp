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
int maxval(Node *Root)
{
    if (Root == NULL)
        return INT_MIN;
    int left = maxval(Root->left);
    int right = maxval(Root->right);
    return max(Root->val, max(left, right));
}
int minval(Node *Root)
{
    if (Root == NULL)
        return INT_MAX;
    int left = maxval(Root->left);
    int right = maxval(Root->right);
    return min(Root->val, min(left, right));
}
void display(Node *Root)
{
    if (Root == NULL)
        return;
    cout << Root->val << " ";
    display(Root->left);
    display(Root->right);
}
int sum1(Node *Root)
{
    if (Root == NULL)
        return 0;
    return sum1(Root->left) + sum1(Root->right) + Root->val;
    //    int left = sum1(Root->left);
    //    int right = sum1(Root->right);
    //    int ans =Root->val+left+right;
}
int size(Node *Root)
{
    if (Root == NULL)
        return 0;
    return size(Root->left) + size(Root->right) + 1;
}
int Level(Node *Root)
{
    if (Root == NULL)
        return 0;
    int leftL = Level(Root->left);   // left levels
    int rightL = Level(Root->right); // right levels
    //  jis side bhi level jada hogi wo return kardena
    return 1 + max(leftL, rightL);
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
    Node *h = new Node(8);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    f->left = h;
    // g->left=h;
    display(a);
    cout << sum1(a);
    cout << endl;
    cout << size(a);
    cout << endl;
    cout << maxval(a);
    cout << endl;
    cout << minval(a);
    cout << endl;
    cout << Level(a);
}