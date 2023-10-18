class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode *current=root;
        TreeNode *newNode=new TreeNode(val);
        if(current==NULL) {
            return newNode;
        }
        while(true) {
            if(val >= current->val) {
                if(current->right==NULL) {
                    current->right=newNode;
                    return root;
                }else {
                    current=current->right;
                }
            }else {
                if(current->left==NULL) {
                    current->left=newNode;
                    return root;
                }else {
                    current=current->left;
                }
            }
        }
        return NULL;
    }
};
