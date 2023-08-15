class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> smaller,larger;
        ListNode *current=head;
        while(current) {
            if(current->val < x) {
                smaller.push_back(current->val);
            }
            else {
                larger.push_back(current->val);
            }
            current=current->next;
        }
        current=head;
        for(auto x:smaller) {
            current->val=x;
            current=current->next;
        }
        for(auto x:larger) {
            current->val=x;
            current=current->next;
        }
        return head;
    }
};
