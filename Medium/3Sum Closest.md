> **Problem Number:** 16 <br>
> **Problem Name:** 3Sum Closest <br>
> **Link:** [https://leetcode.com/problems/3sum-closest/](https://leetcode.com/problems/3sum-closest/) <br>

    class Solution {
    public:
        int threeSumClosest(vector<int>& nums, int target) {
            int difference = INT_MAX;
            int a,b,c;
            int n = nums.size();
            for(int i=0;i<n-2;i++) {
                for(int j=i+1;j<n-1;j++) {
                    for(int k=j+1;k<n;k++) {
                        if( abs(nums[i]+nums[j]+nums[k]-target) < difference) {
                            difference = abs(nums[i]+nums[j]+nums[k]-target);
                            a=nums[i];
                            b=nums[j];
                            c=nums[k];
                        }
                    }
                }
            }
            return a+b+c;
        }
    };