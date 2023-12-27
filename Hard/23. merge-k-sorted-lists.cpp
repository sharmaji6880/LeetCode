class Solution {
public:
    vector<int> nodes;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        nodes={};
        int n=lists.size();
        ListNode *current;
        if(!n) {
            return nullptr;
        }
        for(int i=0;i<n;i++) {
            current=lists[i];
            while(current) {
                nodes.push_back(current->val);
                current=current->next;
            }
        }
        sort(nodes.begin(),nodes.end());
        ListNode *head = new ListNode(0);
        n=nodes.size();
        if(!n) {
            return nullptr;
        }
        head->val=nodes[0];
        current=head;
        for(int i=1;i<n;i++) {
            ListNode *newNode = new ListNode(nodes[i]);
            current->next=newNode;
            newNode->next=NULL;
            current=current->next;
        }
        return head;
    }
};
