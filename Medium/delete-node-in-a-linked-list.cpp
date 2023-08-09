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
