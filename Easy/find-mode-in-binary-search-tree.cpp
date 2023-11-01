class Solution {
public:
    static void traversal(TreeNode *root,map<int,int> &m) {
        if(root->left) {
            traversal(root->left,m);
        }
        m[root->val]++;
        if(root->right) {
            traversal(root->right,m);
        }
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> m={};
        traversal(root,m);
        int count=0;
        for(auto i:m) {
            if(i.second>count) {
                count=i.second;
            }
        }
        set<int> s;
        for(auto i:m) {
            if(i.second==count) {
                s.insert(i.first);
            }
        }
        vector<int> modes;
        for(auto i:s) {
            modes.push_back(i);
        }
        return modes;
    }
};
