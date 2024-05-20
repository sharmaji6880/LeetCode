> **Problem Number:** 230 <br>
> **Problem Name:** Kth Smallest Element in a BST <br>
> **Problem Link:** [https://leetcode.com/problems/kth-smallest-element-in-a-bst/](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

**Using Extra Memory:** <br>

    class Solution {
    public:
        void preorder(TreeNode *root, set<int> &s) {
            if(root == nullptr) {
                return;
            }
            s.insert(root->val);
            preorder(root->left,s);
            preorder(root->right,s);
        }
        int kthSmallest(TreeNode* root, int k) {
            set<int> s;
            preorder(root,s);

            set<int>::iterator it = s.begin();
            for(int i=1;i<k;i++) {
                it++;
            }
            return *it;

        }
    };