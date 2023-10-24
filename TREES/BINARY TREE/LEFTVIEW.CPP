// class Solution {
// public:
// // LEVEL ORDER TRAVERSAAL ME LAST ELEMENT HI RIGHT SIDE SE DIKHEGA
//     int Level(TreeNode *Root)
//     {
//         if (Root == NULL) return 0;
//         return 1 + max(Level(Root->left), Level(Root->right) );
//     }
// void preorder(TreeNode *Root, int level,vector<int>&ans)
// {
//     if (Root == NULL) return;  
//     ans[level] = Root->val;
//     preorder(Root->right,level+1,ans); // call 2
//     preorder(Root->left, level+1,ans);  // call 1 

// }
//     vector<int> rightSideView(TreeNode* root) {
//        int n =Level(root);
//        vector<int>ans(n,0);
//     preorder(root,0,ans);
//        return ans;
//     }
// class Solution {
// public:
// // LEVEL ORDER TRAVERSAAL ME LAST ELEMENT HI RIGHT SIDE SE DIKHEGA
//     int Level(TreeNode *Root)
//     {
//         if (Root == NULL) return 0;
//         return 1 + max(Level(Root->left), Level(Root->right) );
//     }
// void preorder(TreeNode *Root, int level,vector<int>&ans)
// {
//     if (Root == NULL) return;  
//     ans[level] = Root->val;
//     preorder(Root->right,level+1,ans); // call 2
//     preorder(Root->left, level+1,ans);  // call 1 

// }
//     vector<int> rightSideView(TreeNode* root) {
//        int n =Level(root);
//        vector<int>ans(n,0);
//     preorder(root,0,ans);
//        return ans;
//     }
// };