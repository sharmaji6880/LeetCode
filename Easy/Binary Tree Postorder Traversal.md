> **Problem Number:** 145 <br>
> **Problem Name:** Binary Tree Postorder Traversal <br>
> **Problem Link:** [https://leetcode.com/problems/binary-tree-postorder-traversal/](https://leetcode.com/problems/binary-tree-postorder-traversal/) <br>


    class Solution {
    private:
        vector<int> ans;
    public:
        vector<int> postorderTraversal(TreeNode* root) {
            if(!root) {
                return {};
            }
            if(root->left) {
                postorderTraversal(root->left);
            }
            if(root->right) {
                postorderTraversal(root->right);
            }
            ans.push_back(root->val);
            return ans;
        }
    };