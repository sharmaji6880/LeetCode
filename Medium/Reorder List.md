> **Problem Number:** 143 <br>
> **Problem Name:** Reorder List <br>
> **Link:** [https://leetcode.com/problems/reorder-list/](https://leetcode.com/problems/reorder-list/) <br>

    class Solution {
    public:
        vector<int> nodes;
        vector<pair<int,int>> m;
        void reorderList(ListNode* head) {
            nodes={};
            m={};
            ListNode *current=head,*prev;
            while(current) {
                nodes.push_back(current->val);
                current=current->next;
            }
            int n=nodes.size();
            if(n<=1) {
                return;
            }
            for(int i=0;i<n/2;i++) {
                m.push_back({nodes[i],nodes[n-1-i]});
            }
            current=head;
            prev=head;
            for(auto x:m) {
                current->val=x.first;
                current->next->val=x.second;
                prev=current->next;
                current=current->next->next;
            }
            if(n%2) {
                prev->next->val=nodes[n/2];
            }
        }
    };