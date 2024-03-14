> **Problem Number:** 930 <br>
> **Problem Name:** Binary Subarrays With Sum <br>
> **Link:** [https://leetcode.com/problems/binary-subarrays-with-sum/](https://leetcode.com/problems/binary-subarrays-with-sum/) <br>

**Using Brute Force**

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

**Using Sliding Window**

    class Solution {
    public:
        int numSubarraysWithSum(vector<int>& nums, int goal) {
            int count = 0;
            int left = 0,right = 0;
            int sum = nums[0];
            while(left <= right && right < nums.size()) {
                if(sum < goal) {
                    if(right < nums.size()) {
                        right++;
                        sum+=nums[right];
                    }else {
                        left++;
                        sum-=nums[left];
                    }
                }else if(sum == goal) {
                    count++;
                    if(right==nums.size()-1) {
                        left++;
                        right=left;
                        sum=nums[left];
                    }else {
                        right++;
                        sum += nums[right];
                    }
                }else if(sum > goal) {
                    left++;
                    right=left;
                    sum=nums[left];
                }
            }
            return count;
        }
    };