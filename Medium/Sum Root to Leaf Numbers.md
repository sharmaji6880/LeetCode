> **Problem Number:** 129 <br>
> **Problem Name:** Sum Root to Leaf Numbers <br>
> **Problem Link:** [https://leetcode.com/problems/sum-root-to-leaf-numbers/](https://leetcode.com/problems/sum-root-to-leaf-numbers/) <br>

    class Solution {
    public:
        int sum;
        string s;
        void preorder(TreeNode* root) {
            if(root == nullptr) {
                return;
            }
            s+=to_string(root->val);
            if(root->left == root->right) {
                sum+=stoi(s);
                s.pop_back();
                return;
            }
            preorder(root->left);
            preorder(root->right);
            s.pop_back();
            
        }
        int sumNumbers(TreeNode* root) {
            sum = 0;
            s="";
            preorder(root);
            return sum;
        }
    };