> **Problem Number:** 1038 <br>
> **Problem Name:** Binary Search Tree to Greater Sum Tree <br>
> **Problem Link:** [https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree](https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree)

    class Solution {
    public:
        void preorder(TreeNode *root, vector<int> &nodes) {
            if( root == nullptr ) {
                return ;
            }
            nodes.push_back(root->val);
            if(root -> left) {
                preorder(root -> left, nodes);
            }
            if(root -> right) {
                preorder(root -> right, nodes);
            }
        }
        void modify(TreeNode *root, vector<int> &prefixSum, map<int,int> &valToIndex, int &totalSum) {
            if(root == nullptr) {
                return;
            }
            int index = valToIndex[root->val];
            if(index == 0) {
                root -> val = totalSum;
            }else {
                root -> val += totalSum - prefixSum[index];
            }
            modify(root -> left, prefixSum, valToIndex, totalSum);
            modify(root -> right, prefixSum, valToIndex, totalSum);
        }
        TreeNode* bstToGst(TreeNode* root) {
            vector<int> nodes;
            preorder(root,nodes);

            int n = nodes.size();

            vector<int> prefixSum(n,0);
            map<int,int> valToIndex;
            int totalSum = 0;

            sort(nodes.begin(),nodes.end());

            for(int i = 0;i<n;i++) {
                valToIndex[nodes[i]] = i;
                totalSum += nodes[i];
                if(i==0) {
                    prefixSum[i] = nodes[i];
                    continue;
                }
                prefixSum[i] = prefixSum[i-1] + nodes[i];
            }
            
            for(auto x: nodes) {
                cout<<x<<" ";
            }
            modify(root,prefixSum,valToIndex,totalSum);
            return root;
        }
    };