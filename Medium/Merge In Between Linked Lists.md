> **Problem Number:** 1669 <br>
> **Problem Name:** Merge In Between Linked Lists <br>
> **Link:** [https://leetcode.com/problems/merge-in-between-linked-lists/](https://leetcode.com/problems/merge-in-between-linked-lists/) <br>

    class Solution {
    public:
        ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
            ListNode *ptr1,*ptr2,*current,*last;
            current=list2;
            while(current->next) {
                current=current->next;
            }
            last=current;
            current=list1;
            int i=0;
            while(i!=a-1) {
                i++;
                current=current->next;
            }
            ptr1=current;
            ListNode* prev;
            while(i!=b+1) {
                ++i;
                prev=current;
                current=current->next;
            }
            prev->next=nullptr;
            ptr2=current;
            ptr1->next=list2;
            last->next=ptr2;

            return list1;

        }
    };