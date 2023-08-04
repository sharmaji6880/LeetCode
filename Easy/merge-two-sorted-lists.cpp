class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==list2) {
            return NULL;
        }
        vector<int> arr;
        ListNode *current=list1;
        while(current) {
            arr.push_back(current->val);
            current=current->next;
        }
        current=list2;
        while(current) {
            arr.push_back(current->val);
            current=current->next;
        }
        sort(arr.begin(),arr.end());

        ListNode *root = new ListNode();
        current=root;
        for(int i=0;i<(int) arr.size();i++) {
            ListNode *newNode = new ListNode(arr[i]);
            if(i==0) {
                root=newNode;
                current=root;
                continue;
            }
            current->next=newNode;
            current=current->next;
        }

        return root;
    }
};
