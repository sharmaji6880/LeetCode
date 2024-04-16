> **Problem Number:** 623 <br>
> **Problem Name:** Add One Row to Tree <br>
> **Problem Link: [https://leetcode.com/problems/add-one-row-to-tree/](https://leetcode.com/problems/add-one-row-to-tree/) <br>

    class Solution {
    public:
        TreeNode* addOneRow(TreeNode* root, int val, int depth) {
            if(depth == 1) {
                TreeNode *node = new TreeNode(val);
                node->left = root;
                return node;
            }
            queue<TreeNode*> q;
            int d = 1;
            q.push(root);
            while(!q.empty()) {
                int size = q.size();
                if(d == depth-1) {
                    for(int i=0;i<size;i++) {
                        TreeNode *node = q.front();
                        TreeNode *leftChild = node->left;
                        TreeNode *rightChild = node->right;
                        TreeNode *node1 = new TreeNode(val);
                        TreeNode *node2 = new TreeNode(val);
                        node->left = node1;
                        node->right = node2;
                        node1->left = leftChild;
                        node2->right = rightChild;
                        q.pop();
                    }
                    return root;
                }
                for(int i=0;i<size;i++) {
                    TreeNode *node = q.front();
                    if(node->left) {
                        q.push(node->left);
                    }
                    if(node->right) {
                        q.push(node->right);
                    }
                    q.pop();
                }
                d+=1;
            }
            return nullptr;
        }
    };