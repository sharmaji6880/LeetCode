class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==NULL) {
            return {};
        }
        vector<TreeNode*> stack;
        vector<int> traversal;
        TreeNode* current=root;
        step:{
          while(current!=NULL) {
            stack.push_back(current);
            current=current->left;
          }
        }
        
        if(!stack.empty()) {
            traversal.push_back((stack.back())->val);
            current=stack.back()->right;
            stack.pop_back();
            goto step;
        }

        return traversal;
    }
};
