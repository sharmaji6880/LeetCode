class Solution {
public:
    vector<int> nodes;
    void preorder(TreeNode* root) {
        
        if(root==NULL) {
            return;
        }
        nodes.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        preorder(root);
        for(auto x:nodes) {
            if(x>=low && x<=high) {
                sum+=x;
            }
        }
        return sum;
    }
};
