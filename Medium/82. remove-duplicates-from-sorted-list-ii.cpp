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


// This approach uses few extra pointers to solve the problem
// Hence , Space Complexity: O(1)
class Solution {
public:
    
    ListNode* deleteDuplicates(ListNode* head) {
       if(head == nullptr) {
           return nullptr;
       }
       ListNode *current = head;
       ListNode *temp,*prev=nullptr;
       
       while(current && current->next) {
           if(current->val != current->next->val) {
               prev=current;
               current = current->next;
               continue;
           }
           
           temp=current;
           int val = current->val;
           while(temp && temp->val ==val) {
               temp=temp->next;
           }
           if(prev == nullptr) {
               head=temp;
               current=head;
               continue;
           }
           prev->next=temp;
           current=temp;
       }
       
       return head;
    }
};