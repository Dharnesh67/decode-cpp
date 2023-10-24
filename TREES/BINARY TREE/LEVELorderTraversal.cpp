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
int Level(Node *Root)
{
    if (Root == NULL)
        return 0;
    int leftL = Level(Root->left);   // left levels
    int rightL = Level(Root->right); // right levels
    //  jis side bhi level jada hogi wo return kardena
    return 1 + max(leftL, rightL);
}
void nth_level(Node *Root, int curr, int L)
{
    if (Root == NULL)
        return;
    if (curr == L)
    {
        cout << Root->val << " "; // work SECOND LEVEL PRINTNG
        return;
    }
    nth_level(Root->left, curr + 1, L);  // call 1
    nth_level(Root->right, curr + 1, L); // call 2
}
void Levelorder(Node *root)
{ // printing levels
    int n = Level(root); // HOW MANY LEVELS ARE THERE 
    for (int i = 1; i <= n; i++)
    {
        cout << "->>" << i << " ";
        nth_level(root, 1, i);
        cout << endl;
    }
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
    Levelorder(a);
    cout<<Level(a);
}