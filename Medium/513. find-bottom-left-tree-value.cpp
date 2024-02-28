class Solution {
public:

    int height(TreeNode *root) {
        if(root==NULL) {
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    int findBottomLeftValue(TreeNode* root) {
        if(root->left == nullptr && root->right == nullptr) {
            return root->val;
        }
        int h = height(root)-1;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()) {
            pair<TreeNode*,int> p;
            p = q.front();
            if(p.second == h) {
                return p.first->val;
            }
            q.pop();
            if(p.first->left) {
                q.push({p.first->left,p.second+1});
            }
            if(p.first -> right) {
                q.push({p.first->right,p.second+1});
            } 
        }
        return -1;
    }
};