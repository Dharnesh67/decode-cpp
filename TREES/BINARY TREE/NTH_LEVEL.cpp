#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        left = right = NULL;
    }
};
void printNthLevel(Node* root, int n) {
    if(!root) return;
    queue<Node*>q;
    q.push(root);
    int clevel=1;
    int sum=0;
    while (!q.empty())
    {
        int levelsize=q.size();
        if(clevel==n){
            for (int i = 0; i < levelsize; i++)
            {
                cout<<q.front()->val<<" ";
                q.pop();
            }
        }
        while (levelsize>0)
        {
            auto x= q.front();
            q.pop();
            if(x->left) q.push(x->left);
            if(x->right) q.push(x->right);
            levelsize--;
        }
        clevel++;
    }
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int n;
    cout << "Enter the level to print: ";
    cin >> n;
    printNthLevel(root, n);

    return 0;
}