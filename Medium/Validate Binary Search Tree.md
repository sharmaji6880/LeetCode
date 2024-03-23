> **Problem Number:** 98 <br>
> **Problem Name:** Validate Binary Search Tree <br>
> **Link:** [https://leetcode.com/problems/validate-binary-search-tree/](https://leetcode.com/problems/validate-binary-search-tree/) <br>

    class Solution {
    public:
        void inorder(TreeNode *root, vector<int> &arr) {
            if(root==NULL) {
                return;
            }
            inorder(root->left,arr);
            arr.push_back(root->val);
            inorder(root->right,arr);
        }
        bool isValidBST(TreeNode* root) {
            vector<int> arr;
            inorder(root,arr);
            for(int i=0;i<arr.size()-1;i++) {
                if(arr[i]<arr[i+1]) {
                    continue;
                }
                return false;
            }
            return true;

        }
    };