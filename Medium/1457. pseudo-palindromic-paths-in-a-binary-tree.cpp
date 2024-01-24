class Solution {
public:
    void preorder(TreeNode* root, map<int,int> &m, int &count) {
        m[root->val]++;
        if(root->left==root->right) {
            int c=0;
            for(auto x:m) {
                if(x.second % 2 == 1) {
                    c++;
                }
            }
            if(c<=1) {
                count++;
            }
        }
        
        if(root->left) {
            preorder(root->left,m,count);
        }
        if(root->right) {
            preorder(root->right,m,count);
        }
        m[root->val]--;
        
        
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int count=0;
        map<int,int> m;
        preorder(root,m,count);
        return count;
    }
};
