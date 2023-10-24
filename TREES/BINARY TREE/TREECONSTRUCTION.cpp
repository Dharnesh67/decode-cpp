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
void levelorder(Node* root){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
    Node* temp =q.front();
    cout<<q.front()->val<<" ";
    q.pop();
    if(temp->left) q.push(temp->left);
    if(temp->right) q.push(temp->right);}
    }
int maxTree(Node* root){// for maximum
    if(root==NULL) return INT_MIN;
    return max(root->val,max(maxTree(root->left),maxTree(root->right)));
}
int minTree(Node* root){ // for minimum
    if(root==NULL) return INT_MAX;
    return min(root->val,min(minTree(root->left),minTree(root->right)));
}
int main()
{///NULL ==INT MIN
    int arr[] = {1, 2, 3, 4, 5, 6, INT_MIN,7,INT_MIN,INT_MIN, 8, 9};
    int n =sizeof(arr)/sizeof(arr[0]);
    Node* a= construct(arr,n);
    levelorder(a);
    int M=maxTree(a);
    cout<<"   "<<M;
    int m=minTree(a);
    cout<<"  "<<m;
    


}