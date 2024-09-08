> **Problem Number:** 725 <br>
> **Problem Name:** Split Linked List in Parts <br>
> **Problem Link:** [https://leetcode.com/problems/split-linked-list-in-parts/](https://leetcode.com/problems/split-linked-list-in-parts/) <br>

    class Solution {
    public:
        vector<ListNode*> splitListToParts(ListNode* head, int k) {
            vector<ListNode*> nodes;
            ListNode *current=head;
            while(current) {
                nodes.push_back(current);
                current=current->next;
            }
            int n=nodes.size();
            int num=n/k;
            int firstGroups=n%k;
            vector<ListNode*> ans;
            if(num==0) {
                for(int i=0;i<k;i++) {
                    if(i<nodes.size()) {
                        ans.push_back(nodes[i]);
                        nodes[i]->next=NULL;
                        continue;
                    }
                    ans.push_back(NULL);
                }
                return ans;
            }

            
            for(int i=0;i<firstGroups;i++) {
                ans.push_back(nodes[(num+1)*i]);
                nodes[i*(num+1)+num]->next=NULL;
            }
            int index=firstGroups*(num+1);
            for(int i=0;i<k-firstGroups;i++) {
                ans.push_back(nodes[index+i*(num)]);
                nodes[index+i*(num)+num-1]->next=NULL;
            }
            return ans;
        }
    };
