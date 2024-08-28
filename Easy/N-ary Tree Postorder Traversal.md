> **Problem Number:** 590 <br>
> **Problem Name:** N-ary Tree Postorder Traversal <br>
> **Problem Link:** [https://leetcode.com/problems/n-ary-tree-postorder-traversal/](https://leetcode.com/problems/n-ary-tree-postorder-traversal/) <br>

    class Solution {
    public:
        vector<int> answer;
        Solution() {
            answer={};
        }
        vector<int> postorder(Node* root) {
            if(root==nullptr) {
                return {};
            }
            for(int i=0;i<(int)root->children.size();i++) {
                postorder(root->children[i]);
            }
            answer.push_back(root->val);
            return answer;
        }
    };