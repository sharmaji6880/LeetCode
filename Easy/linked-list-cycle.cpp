class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> mymap;
        ListNode *current=head;
        mymap[current]++;
        while(current) {
           current=current->next;
           if(mymap.count(current)) {
               return true;
           };
           mymap[current]++;
        }
        return false;
    }
};
