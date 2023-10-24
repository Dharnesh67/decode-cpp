#include <iostream>
#include <climits>
#include <queue>
using namespace std;
// USING QUEUE
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
// tree construction using level order searching
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i =1;
    int j =2;
    while (q.size()>0 and i<n )
    {

        Node* temp=q.front();
        q.pop();
        Node* R;
        Node* L;
        if(arr[i]!=INT_MIN) L=new Node(arr[i]);
        else L=NULL;
        if(j<n and arr[j]!=INT_MIN) R=new Node(arr[j]);
        else R= NULL;
        temp->left=L;
        temp->right=R;
       if(L!=NULL) q.push(L);
        if(R!=NULL)q.push(R);
        i+=2;
        j+=2;
    }
    return root;
}
void leftboundary(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    leftboundary(root->left);
    if(!root->left) leftboundary(root->right); // jab left null ho jaye tavhi right ko call karna h
}
void bottom(Node* root){ // leafs
    if(root==NULL) return ;
    if(root->left==NULL and root->right==NULL)cout<<root->val<<" ";
    leftboundary(root->left);
    leftboundary(root->right); // jab left null ho jaye tavhi right ko call karna h
}
void right(Node* root){ // leafs
    if(root==NULL) return ;
    if(root->left==NULL and root->right==NULL) return ;
    cout<<root->val<<" ";
    leftboundary(root->right);
    if(!root->right) leftboundary(root->left); // jab left null ho jaye tavhi right ko call karna h
}
int main()
{///NULL ==INT MIN
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10,11,12};
    int n =sizeof(arr)/sizeof(arr[0]);
    Node* a= construct(arr,n);
    leftboundary(a);
    cout<<endl;
    bottom(a);
    cout<<endl;
    right(a);
    // three steps 
    // LEFT TRAVERSAL
    // LEAF TRAVERSAL 
    // RIGHT TRAVERSAL



}