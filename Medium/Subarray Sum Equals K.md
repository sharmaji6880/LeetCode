> **Problem Number:** 560 <br>
> **Problem Name:** Subarray Sum Equals K <br>
> **Link:** [https://leetcode.com/problems/subarray-sum-equals-k/](https://leetcode.com/problems/subarray-sum-equals-k/) <br>

**Using PrefixSum**

    class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int pSum = 0;
            int count = 0;
            map<int,int> m;
            m[pSum]=1;
            for(int i=0;i<nums.size();i++) {
                pSum+=nums[i];
                if(m.count(pSum-k)) {
                    count+=m[pSum-k];
                }
                m[pSum]++;
            }
            return count;
        }
    };
