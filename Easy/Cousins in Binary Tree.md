> **Problem Number:** 993 <br>
> **Problem Name:** Cousins in Binary Tree <br>
> **Problem Link:** [https://leetcode.com/problems/cousins-in-binary-tree](https://leetcode.com/problems/cousins-in-binary-tree) <br>

    class Solution {
    public:
        bool isCousins(TreeNode* root, int x, int y) {
            queue<TreeNode*> q;
            map<int,TreeNode *> m;
            int size;

            TreeNode *front;

            q.push(root);

            while(!q.empty()) {
                size = q.size();
                m.clear();

                for(int i=0;i<size;i++) {
                    front = q.front();
                    q.pop();

                    if(front -> left) {
                        q.push(front -> left);
                        m[front -> left -> val] = front;
                    }
                    if(front -> right) {
                        q.push(front -> right);
                        m[front -> right -> val] = front;
                    }
                }
                if(m.count(x) && m.count(y) && m[x]!=m[y]) {
                    return true;
                }
            }
            return false;
        }
    };