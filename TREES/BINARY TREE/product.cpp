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

void display(Node *Root)
{
    if (Root == NULL)
        return;
    cout << Root->val << " ";
    display(Root->left);
    display(Root->right);
}
int product(Node* root,int &pr){
    if(root==NULL) return 1;
    
    int lst=product(root->left,pr*=root->val);
    int rst=product(root->right,pr*=root->val );
    return lst*rst*root->val;
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
    cout<<endl;
    int pr=product(a,pr);
    cout<<pr;
}