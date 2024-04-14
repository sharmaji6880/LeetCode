> **Problem Number:** 404 <br>
> **Problem Name:** Sum of Left Leaves <br>
> **Problem Link:** [https://leetcode.com/problems/sum-of-left-leaves/](https://leetcode.com/problems/sum-of-left-leaves/) <br>

    class Solution {
    public:
        void preorder(TreeNode* root, int &sum) {
            if(root == nullptr) {
                return;
            }
            if(root -> left && root->left->left == root->left->right) {
                sum+= root->left->val;
            }
            preorder(root->left,sum);
            preorder(root->right,sum);
        }
        int sumOfLeftLeaves(TreeNode* root) {
            int sum = 0;
            preorder(root,sum);
            return sum;
        }
    };