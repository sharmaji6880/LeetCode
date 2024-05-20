> **Problem Number:** 230 <br>
> **Problem Name:** Kth Smallest Element in a BST <br>
> **Problem Link:** [https://leetcode.com/problems/kth-smallest-element-in-a-bst/](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) <br>

    class Solution {
    public:
        void preorder(TreeNode *root, vector<int> &v) {
            if(root == nullptr) {
                return;
            }
            preorder(root->left,v);
            v.push_back(root->val);
            preorder(root->right,v);
        }
        int kthSmallest(TreeNode* root, int k) {
            vector<int> v;
            preorder(root,v);

            return v[k-1];

        }
    };