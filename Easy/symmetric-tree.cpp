class Solution {
public:
    bool isMirror(TreeNode *p,TreeNode *q) {
        if(p==q) {
            return true;
        }
        if(p==NULL || q==NULL) {
            return false;
        }
        if(p->val==q->val && isMirror(p->left,q->right) && isMirror(p->right,q->left)) {
            return true;
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if(isMirror(root->left,root->right)) {
            return true;
        }
        return false;
    }
};
