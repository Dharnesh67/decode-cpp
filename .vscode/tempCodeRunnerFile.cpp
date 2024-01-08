#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;

    }
};
int levels(Node* root){
    if(!root){
        return 0;
    }
    int lefl=levels(root->left);
    int rightl=levels(root->right);
    return 1+max(lefl,rightl);

}
int height(Node* root){
    return levels(root)-1;
}
int main(){
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

    cout<<levels(a)<<endl;
    cout<<height(a);
}