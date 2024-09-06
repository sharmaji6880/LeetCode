> **Problem Number:** 3217 <br>
> **Problem Name:** Delete Nodes From Linked List Present in Array <br>
> **Problem Link:** [https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/](https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array/) <br>

    class Solution {
    public:
        ListNode* modifiedList(vector<int>& nums, ListNode* head) {
            set<int> s;
            for(auto x:nums) {
                s.insert(x);
            }
            
            while( head && s.count(head -> val)) {
                head = head -> next;
            }
            
            ListNode *current = head;

            while(current -> next) {
                if(s.count(current -> next -> val)) {
                    current -> next = current -> next -> next;
                    continue;
                }
                current = current -> next;
            }
            return head;
        }
    };