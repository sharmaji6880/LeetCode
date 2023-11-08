class Solution {
public:
    vector<int> odd,even;
    ListNode* oddEvenList(ListNode* head) {
        odd={};
        even={};
        ListNode *current=head;
        int cnt=1;
        while(current) {
            if(cnt%2) {
                odd.push_back(current->val);
            }
            else {
                even.push_back(current->val);
            }
            current=current->next;
            cnt++;
        }
        current=head;
        for(auto x:odd) {
            current->val=x;
            current=current->next;
        }
        for(auto x:even) {
            current->val=x;
            current=current->next;
        }
        return head;
    }
};
