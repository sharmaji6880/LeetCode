> **Problem Number:** 257 <br>
> **Problem Name:** Binary Tree Paths <br>
> **Link:** [https://leetcode.com/problems/binary-tree-paths/](https://leetcode.com/problems/binary-tree-paths/) <br>

    class Solution {
    public:
        vector<vector<int>> ans;
        vector<int> arr;
        void func(TreeNode* root) {
            if(root->left == root->right) {
                arr.push_back(root->val);
                ans.push_back(arr);
                arr.pop_back();
                return;
                
            }
            arr.push_back(root->val);
            if(root->left) {
                func(root->left);
                if(root->right == NULL) {
                    arr.pop_back();
                }
                
            }
            
            
            if(root->right) {
                func(root->right);
                arr.pop_back();
            }
        }
        vector<string> binaryTreePaths(TreeNode* root) {
            func(root);
            vector<string> finalAns;
            for(int i=0;i<ans.size();i++) {
                string s="";
                for(int j=0;j<ans[i].size();j++) {
                    if(j==ans[i].size()-1) {
                        s+=to_string(ans[i][j]);
                    }else {
                        s+=to_string(ans[i][j]);
                        s+="->";
                    }
                }
                finalAns.push_back(s);
            }
            return finalAns;
        }
    };
