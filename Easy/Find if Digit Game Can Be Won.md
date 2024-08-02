> **Problem Number:** 3232 <br>
> **Problem Name:** Find if Digit Game Can Be Won <br>
> **Problem Link:** [https://leetcode.com/problems/find-if-digit-game-can-be-won/](https://leetcode.com/problems/find-if-digit-game-can-be-won/) <br>

    class Solution {
    public:
        bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0;
        int doubleDigitSum = 0;
        for(auto x:nums) {
                if(x/10) {
                    doubleDigitSum += x;
                }else {
                    singleDigitSum += x;
                }
        }

        if(doubleDigitSum == singleDigitSum) {
            return false;
        }
        return true;
        }
    };