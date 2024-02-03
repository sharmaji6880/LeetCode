class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        int len=0; // This is a variable to store the length of the linked list.

        ListNode* current=head; // This is a pointer to traverse the linked list
        
        while(current) { // This while loop finds out the length of the linked list
            current=current->next;
            len++;
        }

        stack<ListNode*> st; // This is a stack which stores the addresses of the nodes

        int rem=len%k;  // rem is the variable to store the no. of remaining nodes
        int nog=(len-rem)/k; // nog is the variable to store the no. of node groups

        ListNode* last=nullptr; // This is a pointer to store the address of the last node of each group
        ListNode* next; // This is a pointer to store the address of the first node of the next group
        ListNode* temp; // This is a pointer to store the addresses of the nodes when they are popped from the stack

        current=head;
        int covered=0; // This is a variable to store the value of no. of groups reversed currently

        while(current) {
            st.push(current);
            current=current->next;

            
            if(st.size()==k) {
                if(last) {
                    last->next=st.top();
                }
                if(!covered) {
                    head=st.top();
                }
                while(st.size() > 1) {
                    temp=st.top();
                    st.pop();
                    temp->next=st.top();
                }
                last=st.top();
                st.pop();
                covered++;
            }
            if(covered==nog) {
                last->next=current;
                break;
            }

            
        }
        
        
        return head;
    }
};
