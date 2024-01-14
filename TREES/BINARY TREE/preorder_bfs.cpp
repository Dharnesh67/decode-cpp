#include<bits/stdc++.h>
using namespace std;
// write TreeNode class
    class TreeNode{
        public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int val){
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
    };
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> ans;
        if (root) st.push(root);
        while (!st.empty()) {
            TreeNode* temp = st.top();
            st.pop();
            ans.push_back(temp->val);
            if (temp->right) st.push(temp->right);  // Push right child first
            if (temp->left) st.push(temp->left);  // Then push left child
        }
        return ans;
    }
};

// write Bfs class for  preorder and inorder
int main(){
    TreeNode* root = new TreeNode(1);
    TreeNode* left = new TreeNode(2);
    TreeNode* right = new TreeNode(3);
    root->left=left;
    root->right=right;
    Solution s;
    vector<int> ans = s.preorderTraversal(root);
    for(auto i:ans) cout<<i<<" ";
}