> **Problem Number:** 2161 <br>
> **Problem Name:** Partition Array According to Given Pivot <br>
> **Problem Link:** [https://leetcode.com/problems/partition-array-according-to-given-pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot) <br>

    class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> smaller, larger;
            int n = nums.size(), equals = 0;
            for(int i=0;i<n;i++) {
                if(nums[i] < pivot) {
                    smaller.push_back(nums[i]);
                }else if(nums[i] > pivot) {
                    larger.push_back(nums[i]);
                }else {
                    equals++;
                }
            }
            vector<int> ans;
            for(int i=0;i<smaller.size();i++) {
                ans.push_back(smaller[i]);
            }
            while(equals > 0) {
                ans.push_back(pivot);
                equals--;
            }
            for(int i=0;i<larger.size();i++) {
                ans.push_back(larger[i]);
            }
            return ans;
        }
    };