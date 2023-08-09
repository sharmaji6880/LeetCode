class Solution {
public:
    ListNode *head;
    vector<int> nodes;
    Solution(ListNode* head) {
        head=head;
        nodes={};
        ListNode *current=head;
        while(current) {
            nodes.push_back(current->val);
            current=current->next;
        }
    }
    
    int getRandom() {
        int n=nodes.size();
        int random = (rand()%n);
        return nodes[random];
    }
};
