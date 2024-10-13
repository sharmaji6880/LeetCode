> **Problem Number:** 1 <br>
> **Problem Name:** Two Sum <br>
> **Problem Link:** [https://leetcode.com/problems/two-sum/](https://leetcode.com/problems/two-sum/) <br>

**Brute Force Solution:**

    class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0; i < n-1; i++) {
            for(int j= i+1; j<n; j++) {
                if(nums[i] + nums[j] == target) {
                    return {i,j};
                }
            }
        }
        return {};
        }
    };

**Optimized Solution:**

    class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> m;
        int required;

        for(int i=0;i<n;i++) {
            required = target - nums[i];
            if(m.count(required) == 1) {
                return {m[required],i};
            }
            m[nums[i]] = i;
        }
        return {};
        }
    };

