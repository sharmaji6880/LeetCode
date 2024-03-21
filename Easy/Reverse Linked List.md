> **Problem Number:** 206 <br>
> **Problem Name:** Reverse Linked List <br>
> **Link:** [https://leetcode.com/problems/reverse-linked-list/](https://leetcode.com/problems/reverse-linked-list/) <br>

    class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            vector<int> arr;

            ListNode *current=head;

            while(current) {
                arr.push_back(current->val);
                current=current->next;
            }
            current=head;
            for(int i=arr.size()-1;i>=0;i--) {
                current->val = arr[i];
                current=current->next;
            }
            return head;
        }
    };