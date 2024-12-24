> **Problem Number:** 951 <br>
> **Problem Name:** Flip Equivalent Binary Trees <br>
> **Problem Link:** [https://leetcode.com/problems/flip-equivalent-binary-trees](https://leetcode.com/problems/flip-equivalent-binary-trees) <br>

    class Solution {
    public:
        bool isEquiv(TreeNode *node1, TreeNode *node2, set<int> &s1,set<int> &s2) {
            if( node1 == node2 ) {
                return true;
            }
            if( (node1 && !node2) ||(!node1 && node2) ) {
                return false;
            }
            if( node1 -> val != node2 -> val ) {
                return false;
            }
            s1.clear();
            s2.clear();
            if(node1->left) {
                s1.insert(node1->left->val);
            }
            if(node1->right) {
                s1.insert(node1->right->val);
            }
            if(node2->left) {
                s2.insert(node2->left->val);
            }
            if(node2->right) {
                s2.insert(node2->right->val);
            }
            if(s1 != s2) {
                return false;
            }
            if( isEquiv(node1->left,node2->left,s1,s2) && isEquiv(node1->right,node2->right,s1,s2)) {
                return true;
            }
            if( isEquiv(node1->left,node2->right,s1,s2) && isEquiv(node1->right,node2->left,s1,s2)) {
                return true;
            }

            return false;
        }
        bool flipEquiv(TreeNode* root1, TreeNode* root2) {
            set<int> s1,s2;
            return isEquiv(root1,root2,s1,s2);
        }
    };