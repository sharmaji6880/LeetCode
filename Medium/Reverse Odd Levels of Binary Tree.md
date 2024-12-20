> **Problem Number:** 2415 <br>
> **Problem Name:** Reverse Odd Levels of Binary Tree <br>
> **Problem Link:** [https://leetcode.com/problems/reverse-odd-levels-of-binary-tree](https://leetcode.com/problems/reverse-odd-levels-of-binary-tree) <br>

    class Solution {
    public:
        TreeNode* reverseOddLevels(TreeNode* root) {
            vector<TreeNode*> q;
            TreeNode *front;

            bool isOddLevel = false;
            int size;
            q.push_back(root);

            while(!q.empty()) {
                size = q.size();
                for(int i=0;i<size;i++) {
                    front = q.front();
                    q.erase(q.begin());
                    if( front -> left ) {
                        q.push_back(front -> left);
                    }
                    if( front -> right ) {
                        q.push_back(front -> right);
                    }
                }
                isOddLevel ^= 1;

                if( isOddLevel ) {
                        int l = 0, r = q.size()-1;
                        while(l<r) {
                            swap(q[l]->val, q[r]->val);
                            l++;
                            r--;
                        }
                    }
            }
            return root;
        }
    };