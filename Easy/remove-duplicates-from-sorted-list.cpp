class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) {
            return head;
        }
        ListNode* current=head;
        while(current->next!=NULL) {
            if(current->next->val==current->val) {
                current->next=current->next->next;
                continue;
            }
            current=current->next;
        }
        return head;
    }
};
