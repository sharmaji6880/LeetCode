class Solution {
public:
    int sum=0;
    int count=0;
    vector<TreeNode*> nodes;
    void average(TreeNode *root) {
        if(root==NULL) {
            return;
        }
        if(root->left) {
            average(root->left);
        }
        sum+=root->val;
        count++;
        if(root->right) {
            average(root->right);
        }
        return;
    }
    void inorder(TreeNode *root) {
        if(root==NULL) {
            return;
        }
        if(root->left) {
            inorder(root->left);
        }
        nodes.push_back(root);
        if(root->right) {
            inorder(root->right);
        }
    }
    int averageOfSubtree(TreeNode* root) {
        inorder(root);
        int ans = 0;
        for(int i=0;i<nodes.size();i++) {
            sum=0;
            count=0;
            average(nodes[i]);
            if(sum/count == nodes[i]->val) {
                ans++;
            }
        }
        return ans;
    }
};
