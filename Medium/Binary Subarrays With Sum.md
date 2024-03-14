> **Problem Number:** 930 <br>
> **Problem Name:** Binary Subarrays With Sum <br>
> **Link:** [https://leetcode.com/problems/binary-subarrays-with-sum/](https://leetcode.com/problems/binary-subarrays-with-sum/) <br>

**Using Brute Force**

    // Time Complexity: O(n^3)
    // For larger inputs, this might result into TLE
    class Solution {
    public:
        int numSubarraysWithSum(vector<int>& nums, int goal) {
            int count = 0;
            for(int i=0;i<nums.size();i++) {
                for(int j=i;j<nums.size();j++) {
                    int sum = 0;
                    for(int k=i;k<=j;k++) {
                        sum+=nums[k];
                    }
                    if(sum == goal) {
                        count++;
                    }
                }
            }
            return count;
        }
    };
    
**Using Map and PrefixSum**

    class Solution {
    public:
        int numSubarraysWithSum(vector<int>& nums, int goal) {
            int n = nums.size();
            vector<int> pSum(n,0);
            for(int i=0;i<n;i++) {
                if(i==0) {
                    pSum[i]=nums[i];
                    continue;
                }
                pSum[i]=pSum[i-1]+nums[i];
            }
            map<int,int> m;
            int count = 0;
            for(int i=0;i<n;i++) {
                if(m.count(pSum[i]-goal)) {
                    count+= m[pSum[i]-goal];
                }
                if(pSum[i] - goal == 0) {
                    count++;
                }
                m[pSum[i]]++;
            }
            return count;
        }
    };