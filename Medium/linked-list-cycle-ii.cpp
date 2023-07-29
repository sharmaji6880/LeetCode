class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> m;
        ListNode *current=head;
        int flag=0;
        while(current) {
            m[current]++;
            current=current->next;
            if(m.count(current)) {
                flag=1;
                break;
            }
        }
        if(flag) {
            return current;
        }
        return nullptr;
    }
};
