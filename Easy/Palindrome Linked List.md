> **Problem Number:** 234 <br>
> **Problem Name:** Palindrome Linked List <br>
> **Link:** [https://leetcode.com/problems/palindrome-linked-list/](https://leetcode.com/problems/palindrome-linked-list/) <br>

    class Solution {
    public:
        bool isPalindrome(ListNode* head) {
            string s="";
            ListNode *current=head;
            while(current) {
                s+=to_string(current->val);
                current=current->next;
            }
            int n=s.size();
            for(int i=0;i<n/2;i++) {
                if(s[i]!=s[n-1-i]) {
                    return false;
                }
            }
            return true;
        }
    };