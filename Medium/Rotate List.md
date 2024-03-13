> **Problem Number:** 61 <br>
> **Problem Name:** Rotate List <br>
> **Link:** [https://leetcode.com/problems/rotate-list/](https://leetcode.com/problems/rotate-list/) <br>

    class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if(head == nullptr) {
                return head;
            }
            ListNode *current = head;
            vector<int> arr;
            while(current) {
                arr.push_back(current->val);
                current = current -> next;
            }
            int n = arr.size();
            k=k%n;
            if(k==0) {
                return head;
            }
            vector<int> another;
            for(int i=n-k;i<arr.size();i++) {
                another.push_back(arr[i]);
            }
            for(int i=0;i<=n-k-1;i++) {
                another.push_back(arr[i]);
            }
            current = head;
            for(int i=0;i<another.size();i++) {
                current -> val = another[i];
                current = current -> next;
            }
            return head;
        }
    };