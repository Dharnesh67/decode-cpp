#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // USING QUEUE
    class TreeNode
    {
    public:
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int val)
        { // CONSTRUCTOR
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
    };
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if (left && right) return root;  // If both nodes are under different subtrees of root
        return left ? left : right;  // Either one of p,q is in the subtree OR p,q is not in the subtree at all
    }
};
int main(){

}