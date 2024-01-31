class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        stack<int> st1,st2;
        ListNode* current=head;

        while(current) {
            st1.push(current->val);
            current=current->next;
        }
        int product=0,carry=0;
        int size1=st1.size(),size2;
        while(!st1.empty()) {
            product=(st1.top()*2+carry);
            st2.push(product%10);
            carry=product/10;
            st1.pop();
        }
        if(carry) {
            st2.push(carry);
        }
        size2=st2.size();
        current=head;
        while(current->next) {
            current=current->next;
        }
        for(int i=0;i<size2-size1;i++) {
            ListNode* Node = new ListNode(0);
            current->next=Node;
            current=current->next;
        }
        current=head;
        while(!st2.empty()) {
            current->val=st2.top();
            current=current->next;
            st2.pop();
        }
        return head;
    }
};
