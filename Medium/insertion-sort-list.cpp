class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        vector<int> arr;
        ListNode *current=head;
        while(current) {
            arr.push_back(current->val);
            current=current->next;
        }
        sort(arr.begin(),arr.end());
        current=head;
        int i=0;
        while(current) {
            current->val=arr[i];
            current=current->next;
            i++;
        }
        return head;
    }
};
