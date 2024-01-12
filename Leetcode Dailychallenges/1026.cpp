#include <iostream>
#include <algorithm>
using namespace std;
// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    int maxAncestorDiff(TreeNode *root)
    {
        return dfs(root, root->val, root->val);
    }

private:
    int dfs(TreeNode *node, int mn, int mx)
    {
        if (!node)
        {
            return mx - mn;
        }
        mx = max(mx, node->val);
        mn = min(mn, node->val);
        return max(dfs(node->left, mn, mx), dfs(node->right, mn, mx));
    }
};

int main()
{
    // Create a binary tree
    TreeNode *root = new TreeNode(8);
    root->left = new TreeNode(3);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->right->right = new TreeNode(14);
    root->right->right->left = new TreeNode(13);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(7);

    Solution solution;
    int result = solution.maxAncestorDiff(root);
    cout << "The maximum difference between node and ancestor is: " << result << endl;

    return 0;
}