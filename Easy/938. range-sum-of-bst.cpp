class Solution {
public:
    int sum,low,high;
    void preorder(TreeNode* root) {
        
        if(root==NULL) {
            return;
        }
        if(root->val >= low && root->val <= high) {
            sum+=root->val;
        }
        preorder(root->left);
        preorder(root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sum=0;
        this->low = low;
        this->high = high;
        preorder(root);
        return sum;
    }
};
