> **Problem Number:** 414 <br>
> **Problem Name:** Third Maximum Number <br>
> **Problem Link:** [https://leetcode.com/problems/third-maximum-number/](https://leetcode.com/problems/third-maximum-number/) <br>

    class Solution {
    public:
        int thirdMax(vector<int>& nums) {
            long Max = LONG_MIN, secondMax = LONG_MIN, thirdMax = LONG_MIN;
            for(auto x:nums) {
                if(x > Max) {
                    Max = x;
                }
            }
            for(auto x:nums) {
                if(x > secondMax && x < Max) {
                    secondMax = x;
                }
            }
            for(auto x:nums) {
                if(x > thirdMax && x < secondMax) {
                    thirdMax = x;
                }
            }
            if(thirdMax == LONG_MIN) {
                return Max;
            }
            return thirdMax;
        }
    };