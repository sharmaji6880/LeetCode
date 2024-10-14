> **Problem Number:** 2530 <br>
> **Problem Name:** Maximal Score After Applying K Operations <br>
> **Problem Link:** [https://leetcode.com/problems/maximal-score-after-applying-k-operations/](https://leetcode.com/problems/maximal-score-after-applying-k-operations/) <br>

**Brute Force:**

    // This is a Brute Force Solution
    // It might result into TLE for larger inputs
    class Solution {
    public:
        long long maxKelements(vector<int>& nums, int k) {
            long score = 0;
            int n = nums.size();
            int maxEle,index;
            for(int i=0; i<k;i++) {
                maxEle = INT_MIN;
                for(int j=0;j<n;j++) {
                    if(nums[j] > maxEle) {
                        maxEle = nums[j];
                        index = j;
                    }
                }
                score += maxEle;

                if(maxEle % 3 == 0) {
                    nums[index] /= 3;
                }else {
                    nums[index] = nums[index] / 3 + 1;
                }
            }
            return score;
        }
    };