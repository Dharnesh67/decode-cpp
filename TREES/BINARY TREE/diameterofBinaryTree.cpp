#include<bits/stdc++.h>
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
int level(Node* root,int &dia){
    if(!root) return 0;
    int rightl=level(root->right,dia);
    int leftl=level(root->left,dia);
    dia=max(dia,leftl+rightl);
    return 1+max(leftl,rightl);
}
  int diameterOfBinaryTree(Node* root) {
        int dia=0;
        level(root,dia);
        return dia;
}
int main()
{
    // Example input array for the main function
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Construct the binary tree
    Node *a = construct(arr, n);

    // Call the diameter calculation function
    int result = diameterOfBinaryTree(a);

    // Display the result (you need to implement the diameterOfBinaryTree function)
    cout << "Diameter of the binary tree: " << result << endl;

    return 0;
}