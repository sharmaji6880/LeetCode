> **Problem Number:** 2487 <br>
> **Problem Name:** Remove Nodes From Linked List <br>
> **Problem Link:** [https://leetcode.com/problems/remove-nodes-from-linked-list/](https://leetcode.com/problems/remove-nodes-from-linked-list/) <br>

    class Solution {
    public:
        vector<int> nodes,tbr;
        ListNode* removeNodes(ListNode* head) {
            nodes={};
            tbr={};
            ListNode *current=head;
            while(current) {
                nodes.push_back(current->val);
                current=current->next;
            }
            int n=nodes.size();
            int Max;
            for(int i=n-1;i>=0;i--) {
                if(i==n-1) {
                    Max=nodes[i];
                    tbr.push_back(nodes[i]);
                    continue;
                }
                if(nodes[i]>=Max) {
                    Max=nodes[i];
                    tbr.push_back(Max);
                }
            }
            current=head;
            n=tbr.size();
            for(int i=n-1;i>=0;i--) {
                if(i==0) {
                    current->val=tbr[0];
                    break;
                }
                current->val=tbr[i];
                current=current->next;
            }
            current->next=NULL;
            return head;
        }
    };