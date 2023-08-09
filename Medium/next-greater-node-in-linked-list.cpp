class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans={};
        ListNode *current=head,*temp;
        while(current) {
            temp=current->next;
            int flag=0;
            while(temp) {
                if(temp->val > current->val) {
                    ans.push_back(temp->val);
                    flag=1;
                    break;
                }
                temp=temp->next;
            }
            if(!flag) {
                ans.push_back(0);
            }
            current=current->next;
        }
        return ans;
    }
};
