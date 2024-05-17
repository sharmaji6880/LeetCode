> **Problem Number:** 2331 <br>
> **Problem Name:** Evaluate Boolean Binary Tree <br>
> **Problem Link:** [https://leetcode.com/problems/evaluate-boolean-binary-tree/](https://leetcode.com/problems/evaluate-boolean-binary-tree/) <br>

    class Solution {
    public:
        bool evaluate(TreeNode *node) {
            if(node->val<=1) {
                return node->val;
            }
            if(node->val==2){ 
                return evaluate(node->left) | evaluate(node->right);
            }
            return evaluate(node->left) & evaluate(node->right);
        }
        bool evaluateTree(TreeNode* root) {
            return evaluate(root);
        }
    };