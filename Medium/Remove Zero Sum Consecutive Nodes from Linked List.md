> **Problem Number:** 1171 <br>
> **Problem Name:**  Remove Zero Sum Consecutive Nodes from Linked List <br>
> **Link:** [https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/](https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/) <br>

    class Solution {
    public:
        ListNode* removeZeroSumSublists(ListNode* head) {
            vector<int> arr;
            ListNode *current = head;
            while(current) {
                arr.push_back(current -> val);
                current = current -> next;
            }

            while(true) {
                bool flag = false;
                block: {
                    flag = false;
                }
                for(int i=0;i<arr.size();i++) {
                    for(int j=i;j<arr.size();j++) {
                        int sum = 0;
                        for(int k=i;k<=j;k++) {
                            sum+=arr[k];
                            if(sum == 0) {
                                cout<<i<<" "<<k<<endl;
                                arr.erase(arr.begin()+i,arr.begin()+k+1);
                                flag = true;
                                break;
                            }
                        }
                        if(flag) {
                            break;
                        }
                    }
                    if(flag) {
                        goto block;
                    }
                }
                break;
            }
            if(arr.empty()) {
                return nullptr;
            }
            current = head;
            for(int i=0;i<arr.size();i++) {
                current -> val = arr[i];
                if(i==arr.size()-1) {
                    current -> next = nullptr;
                    break;
                }
                current=current->next;
            }
            return head;
        }
    };