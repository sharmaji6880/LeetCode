> **Problem Number:** 3397 <br>
> **Problem Name:** Maximum Number of Distinct Elements After Operations <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations](https://leetcode.com/problems/maximum-number-of-distinct-elements-after-operations) <br>

    class Solution {
    public:
        int maxDistinctElements(vector<int>& nums, int k) {
            sort(nums.begin(),nums.end());
            int count = 0, prev = INT_MIN;
            for(int num:nums) {
                int l = max(prev,num-k);
                int r = num+k;
                if( l <=  r) {
                    count += 1;
                    prev = l + 1;
                }
            }
            return count;
        }
    };