> **Problem Number:** 3194 <br>
> **Problem Name:** Minimum Average of Smallest and Largest Elements <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements](https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements) <br>

    class Solution {
    public:
        double minimumAverage(vector<int>& nums) {
            double ans;
            int n = nums.size();
            sort(nums.begin(),nums.end());
            for(int i = 0; i < n/2; ++i) {
                if(i == 0) {
                    ans = (nums[i] + nums[n-1-i]) / 2.0;
                    continue;
                }
                double x = (nums[i] + nums[n-1-i]) / 2.0;
                if(x < ans) {
                    ans = x;
                }
            }
            return ans;
        }
    };