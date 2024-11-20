> **Problem Number:** 965 <br>
> **Problem Name:** Univalued Binary Tree <br>
> **Problem Link:** [https://leetcode.com/problems/univalued-binary-tree](https://leetcode.com/problems/univalued-binary-tree) <br>

    class Solution {
    public:
        void preorder(TreeNode *root, set<int> &s) {
            if(root == nullptr) {
                return ;
            }
            s.insert(root -> val);
            preorder(root->left,s);
            preorder(root->right,s);
        }
        bool isUnivalTree(TreeNode* root) {
            set<int> s;
            preorder(root,s);
            if(s.size() == 1) {
                return true;
            }
            return false;
        }
    };