> **Problem Number:** 1022 <br>
> **Problem Name:** Sum of Root To Leaf Binary Numbers <br>
> **Problem Link:** [https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers](https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers) <br>

    class Solution {
    public:
        int binarytoInt(string &s) {
            int n = s.size();
            int ans = 0;
            for(int i=0;i<n;i++) {
                if(s[i] == '1') {
                    ans += pow(2,n-1-i);
                }
            }
            return ans;
        }
        void preorder(TreeNode *root, int &sum, string &s) {
            s += to_string(root -> val);
            if(root -> left == nullptr && root -> right == nullptr) {
                sum += binarytoInt(s);
                return;
            }
            if(root -> left) {
                preorder(root -> left, sum, s);
                s = s.substr(0,s.size()-1);
            }
            if(root -> right) {
                preorder(root -> right, sum, s);
                s = s.substr(0,s.size()-1);
            }
            
        }
        int sumRootToLeaf(TreeNode* root) {
            int sum = 0;
            string s = "";
            preorder(root,sum,s);
            return sum;
        }
    };