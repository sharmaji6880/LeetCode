> **Problem Number:** 2583 <br>
> **Problem Name:** Kth Largest Sum in a Binary Tree <br>
> **Problem Link:** [https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree](https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree) <br>

    class Solution {
    public:
        long long kthLargestLevelSum(TreeNode* root, int k) {
            vector<long> sums;
            queue<TreeNode*> q;
            int size;
            long sum;
            q.push(root);
            TreeNode *current;

            while(!q.empty()) {
                size = q.size();
                sum = 0;
                for(int i=0;i<size;i++) {
                    current = q.front();
                    q.pop();
                    sum += current -> val;
                    if(current -> left) {
                        q.push(current -> left);
                    }
                    if(current -> right) {
                        q.push(current -> right);
                    }
                }
                sums.push_back(sum);
            }
            sort(sums.begin(),sums.end());
            if(sums.size() < k) {
                return -1;
            }
            return sums[sums.size()-k];
        }
    };