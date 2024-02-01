class BSTIterator {
public:
    vector<int> values;
    int currIndex;

    void inorder(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        if(root->left) {
            inorder(root->left);
        }
        values.push_back(root->val);
        if(root->right) {
            inorder(root->right);
        }
    }
    BSTIterator(TreeNode* root) {
        values={};
        currIndex=0;
        inorder(root);
    }
    
    int next() {
        return values[currIndex++];
    }
    
    bool hasNext() {
        if(currIndex < values.size()) {
            return true;
        }
        return false;
    }
};
