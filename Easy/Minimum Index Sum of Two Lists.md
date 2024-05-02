> **Problem Number:** 599 <br>
> **Problem Name:** Minimum Index Sum of Two Lists <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-index-sum-of-two-lists/](https://leetcode.com/problems/minimum-index-sum-of-two-lists/) <br>

    class Solution {
    public:
        vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
            int minSum = INT_MAX;
            int n1 = list1.size();
            int n2 = list2.size();

            for(int i=0;i<n1;i++) {
                for(int j=0;j<n2;j++) {
                    if(list1[i] != list2[j]) {
                        continue;
                    }
                    if(i+j < minSum) {
                        minSum = i+j;
                    }
                }
            }
            vector<string> ans;
            for(int i=0;i<n1;i++) {
                for(int j=0;j<n2;j++) {
                    if(list1[i] == list2[j] && i+j == minSum) {
                        ans.push_back(list1[i]);
                    }
                }
            }
            return ans;
        }
    };