> **Problem Number:** 141 <br>
> **Problem Name:** Linked List Cycle <br>
> **Link:** [https://leetcode.com/problems/linked-list-cycle/?envType=daily-question&envId=2024-03-06](https://leetcode.com/problems/linked-list-cycle/?envType=daily-question&envId=2024-03-06) <br>
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
