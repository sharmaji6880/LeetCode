> **Problem Number:** 988 <br>
> **Problem Name:** Smallest String Starting From Leaf <br>
> **Problem Link:** [https://leetcode.com/problems/smallest-string-starting-from-leaf/](https://leetcode.com/problems/smallest-string-starting-from-leaf/) <br>

    class Solution {
    public:
        char toChar(int n) {
            return (char) (n+97);
        }
        void reverse(string &s) {
            int n = s.size();
            for(int i=0;i<n/2;i++) {
                s[i] = s[i] + s[n-1-i];
                s[n-1-i] = s[i] - s[n-1-i];
                s[i] = s[i] - s[n-1-i];
            }
        }
        void preorder(TreeNode* root, string &s,vector<string> &paths) {
            if(root == nullptr) {
                return;
            }
            s.push_back(toChar(root->val));
            if(root->left == nullptr && root->right == nullptr) {
                paths.push_back(s);
                s.pop_back();
                return;
            }
            preorder(root->left,s,paths);
            preorder(root->right,s,paths);
            s.pop_back();
        }
        string smallestFromLeaf(TreeNode* root) {
            string s = "";
            vector<string> paths;
            preorder(root,s,paths);
            for(auto &x:paths) {
                reverse(x);
            }
            string smallest = "";
            for(auto x:paths) {
                if(smallest == "" || x < smallest) {
                    smallest = x;
                }
            }
            return smallest;
        }
    };