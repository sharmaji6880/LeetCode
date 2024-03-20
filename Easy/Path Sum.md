> **Problem Number:** 112 <br>
> **Problem Name:** Path Sum <br>
> **Link:** [https://leetcode.com/problems/path-sum/description/](https://leetcode.com/problems/path-sum/description/) <br>

    class Solution {
    public:
        bool hasSum(TreeNode *root,int target) {
            if(root==nullptr) {
                return false;
            }
            if(root->left == root->right) {
                if(root->val == target) {
                    return true;
                }else {
                    return false;
                }
            }
            if(hasSum(root->left,target-root->val) || hasSum(root->right,target-root->val)) {
                return true;
            }
            return false;
        }
        bool hasPathSum(TreeNode* root, int targetSum) {
            if(hasSum(root,targetSum)) {
                return true;
            }
            return false;
        }
    };