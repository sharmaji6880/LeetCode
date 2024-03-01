class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr) {
            return {};
        }
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        ans.push_back(root->val);
        while(!q.empty()) {
            int size = q.size();
            
            for(int i=0;i<size;i++) {
                TreeNode *front = q.front();
                if(front->left) {
                    q.push(front->left);
                }
                if(front->right) {
                    q.push(front->right);
                }
                q.pop();
                
            }
            ans.push_back(q.back()->val);
        }
        ans.pop_back();
        return ans;
        
    }
};