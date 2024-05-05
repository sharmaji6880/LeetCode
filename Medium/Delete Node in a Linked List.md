> **Problem Number:** 237 <br>
> **Problem Name:** Delete Node in a Linked List <br>
> **Problem Link:** [https://leetcode.com/problems/delete-node-in-a-linked-list/](https://leetcode.com/problems/delete-node-in-a-linked-list/) <br>

    class Solution {
    public:
        vector<int> nodes;
        void deleteNode(ListNode* node) {
            ListNode *current=node->next;
            while(current) {
                nodes.push_back(current->val);
                current=current->next;
            }
            int index=0;
            while(node->next->next) {
                node->val=nodes[index];
                index++;
                node=node->next;
            }
            node->val=nodes[nodes.size()-1];
            node->next=NULL;
        }
    };
