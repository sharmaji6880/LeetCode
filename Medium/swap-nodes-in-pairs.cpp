class Solution {
public:
    int flag=0;
    ListNode *prev;
    ListNode* swapPairs(ListNode* head) {
       if(head==NULL || head->next==NULL) {
           return head;
       }
       ListNode *temp1=head->next->next,*temp2=head;
       head=head->next;
       head->next=temp2;
       head->next->next=temp1;
       if(flag==1) {
           prev->next=head;
       }
       prev=head->next;
       flag=1;
       if(head->next->next) {
           swapPairs(head->next->next);
       }
       return head;
    }
};
