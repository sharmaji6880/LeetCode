> **Problem Number:** 2807 <br>
> **Problem Name:** Insert Greatest Common Divisors in Linked List <br>
> **Problem Link:** [https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/](https://leetcode.com/problems/insert-greatest-common-divisors-in-linked-list/) <br>

    class Solution {
    public:

        int gcd(int a,int b) {
            int large,small;
            large = max(a,b);
            small = min(a,b);

            while(large % small) {
                int rem = large % small;
                large = small;
                small = rem;
            }
            return small;
        }


        ListNode* insertGreatestCommonDivisors(ListNode* head) {
            ListNode *current = head;
            ListNode *node;
            while(current -> next) {
                node = new ListNode();
                node -> val = gcd(current -> val,current->next->val);
                node -> next = current -> next;
                current -> next = node;
                current = current -> next -> next;
            }
            return head;
        }
    };