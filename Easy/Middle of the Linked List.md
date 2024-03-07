> **Problem Number:** 876 <br>
> **Problem Name:** Middle of the Linked List <br>
> **Link:** [https://leetcode.com/problems/middle-of-the-linked-list/](https://leetcode.com/problems/middle-of-the-linked-list/) <br>

    class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            int len=0;
            ListNode *current=head;
            while(current) {
                len++;
                current=current->next;
            }
            len/=2;
            current=head;
            while(len) {
                len--;
                current=current->next;
            }
            return current;
        }
    };