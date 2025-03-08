> **Problem Number:** 1261 <br>
> **Problem Name:** Find Elements in a Contaminated Binary Tree <br>
> **Problem Link:** [https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/](https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/) <br>

    class FindElements {
    public:
        set<int> nodeValues;
        void dfs(TreeNode* root, set<int> &nodeValues) {
            if(root == nullptr ) {
                return;
            }
            int x = root -> val;
            if(root -> left) {
                root -> left -> val = 2 * x + 1;
                nodeValues.insert(root->left->val);
            }
            if(root -> right) {
                root -> right -> val = 2 * x + 2;
                nodeValues.insert(root->right->val);
            }
            dfs(root -> left,nodeValues);
            dfs(root->right,nodeValues);
        }
        FindElements(TreeNode* root) {
            root -> val = 0;
            nodeValues.insert(0);
            dfs(root, this->nodeValues);
        }
        
        bool find(int target) {
        return nodeValues.count(target);
        }
    };
