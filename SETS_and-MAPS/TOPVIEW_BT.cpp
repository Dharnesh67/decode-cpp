#include <iostream>
#include <climits>
#include <queue>
#include<unordered_map>
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
    if (Root == NULL) return;
      if (curr == L)
    {
        cout << Root->val << " "; // work SECOND LEVEL PRINTNG
        return;
    }
    nth_level(Root->left, curr + 1, L);  // call 1
    nth_level(Root->right, curr + 1, L); // call 2
}
void levelorder(Node* root){
    int n =Level(root);
    for (int i = 0; i <n; i++)
    {
        nth_level(root,0,i);
        cout<<endl;
    }
    
    }
void topview(Node* root){

    unordered_map<int,int>m;
    queue<  pair<Node*,int> > q;
    pair<Node*,int>r;
    r.first=root;
    r.second=0;
    q.push(r);
    while (q.size()>0)
    {
        Node* temp =(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(m.find(level)==m.end()) m[level] =temp->val;// agar map me present nhi h to dal do
        if(temp->left!=NULL){
            pair<Node*,int>p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        } 
        if(temp->right!=NULL){
            pair<Node*,int>p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        } 
    } 
    // printing 
    int maxlevel=INT_MIN;
    int minlevel =INT_MAX;
    for(auto x: m){
        int level=x.first;
        minlevel=min(level,minlevel);
        maxlevel=max(level,maxlevel);
    }
    for (int i = minlevel; i <=maxlevel; i++)
    {
        cout<<m[i]<<" ";

    }
    cout<<endl;
    
}
int main()
{///NULL ==INT MIN
    int arr[] = {1, 2, 3, 4, 5, INT_MIN,6, INT_MIN,INT_MIN,7, 8};
    int n =sizeof(arr)/sizeof(arr[0]);
    Node* a= construct(arr,n);
    levelorder(a);
    topview(a);

}