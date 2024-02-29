// This approach uses extra memory to solve the problem
// It uses map data structure to store the frequencies of the numbers
// appearing in the linked list and then 
// the map is used to insert only those elements in the linked list
// whose frequencey of occurrence is 1
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       map<int,int> m;
       ListNode *current = head;
       while(current) {
           m[current->val]++;
           current=current->next;
       }
       current=head;
       int count = 0;
       for(auto x:m) {
           if(x.second == 1) {
               count++;
           }
       }
       if(count == 0) {
           return nullptr;
       }
       int counter=0;
       for(auto x:m) {
           if(x.second > 1) {
               continue;
           }
           counter++;
           if(counter==count) {
               current->val=x.first;
               continue;
           }
           current->val = x.first;
           current=current->next;
       }
       if(current) {
           current->next = NULL;
       }
       return head;
    }
};