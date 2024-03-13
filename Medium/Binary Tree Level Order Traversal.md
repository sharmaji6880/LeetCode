> **Problem Number:** 102 <br>
> **Problem Name:** Binary Tree Level Order Traversal <br>
> **Link:** [https://leetcode.com/problems/binary-tree-level-order-traversal/](https://leetcode.com/problems/binary-tree-level-order-traversal/) <br>

**Using BFS(queue):** <br>

    class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            if(root == nullptr) {
                return {};
            }
            queue<TreeNode*> q;
            vector<vector<int>> ans;

            q.push(root);
            while(!q.empty()) {
                int size = q.size();
                vector<int> arr;
                for(int i=0;i<size;i++) {
                    arr.push_back(q.front()->val);
                    TreeNode *temp = q.front();
                    q.pop();
                    if(temp -> left) {
                        q.push(temp -> left);
                    }
                    if(temp -> right) {
                        q.push(temp -> right);
                    }
                }
                ans.push_back(arr);
            }
            return ans;
        }
    };