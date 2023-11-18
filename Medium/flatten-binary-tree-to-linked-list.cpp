class Solution {
public:
    vector<int> nodes;
    void preorder(TreeNode *root) {
        if(root==nullptr) {
            return;
        }
        nodes.push_back(root->val);
        if(root->left) {
            preorder(root->left);
        }
        if(root->right) {
            preorder(root->right);
        }
    }
    void flatten(TreeNode* root) {
        nodes.clear();
        if(root==NULL) {
            return;
        }
        preorder(root);
        root->left=nullptr;
        TreeNode *current=root;

        for(int i=1;i<nodes.size();i++) {
            current->right=new TreeNode(nodes[i]);
            current=current->right;
        }
    }
};
