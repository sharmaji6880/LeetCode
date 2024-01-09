
class Solution {
public:
    vector<int> seq;
    void inorder(TreeNode *root) {
        if(root==NULL) {
            return;
        }
        inorder(root->left);
        if(root->left==root->right) {
            seq.push_back(root->val);
        }
        inorder(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> seq1,seq2;

        inorder(root1);
        seq1=seq;
        seq={};
        inorder(root2);
        seq2=seq;

        if(seq1==seq2) {
            return true;
        }

        return false;
    }
};
