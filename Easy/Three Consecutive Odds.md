> **Problem Number:** 1550 <br>
> **Problem Name:** Three Consecutive Odds <br>
> **Problem Link:** [https://leetcode.com/problems/three-consecutive-odds/](https://leetcode.com/problems/three-consecutive-odds/) <br>

    class Solution {
    public:
        bool threeConsecutiveOdds(vector<int>& arr) {
            int n = arr.size();
            if( n < 3 ) {
                return false;
            }

            for(int i = 0; i < n-2; i++) {
                if(arr[i] % 2 && arr[i+1] % 2 && arr[i+2] % 2) {
                    return true;
                }
            }
            return false;
        }
    };