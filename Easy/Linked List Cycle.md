> **Problem Number:** 141 <br>
> **Problem Name:** Linked List Cycle <br>
> **Link:** [https://leetcode.com/problems/linked-list-cycle/](https://leetcode.com/problems/linked-list-cycle/) <br>

    class Solution {
    public:
        bool hasCycle(ListNode *head) {
            map<ListNode*,int> mymap;
            ListNode *current=head;
            mymap[current]++;
            while(current) {
            current=current->next;
            if(mymap.count(current)) {
                return true;
            };
            mymap[current]++;
            }
            return false;
        }
    };

    class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode *slow,*fast;
            slow = head;
            fast = head;
            while(slow && fast && fast->next) {
                slow=slow->next;
                fast=fast->next->next;

                if(slow==fast) {
                    return true;
                }
            }
            return false;
        }
    };
