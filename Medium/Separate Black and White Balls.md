> **Problem Number:** 2938 <br>
> **Problem Name:** Separate Black and White Balls <br>
> **Problem Link:** [https://leetcode.com/problems/separate-black-and-white-balls/](https://leetcode.com/problems/separate-black-and-white-balls/) <br>

    class Solution {
    public:
        long long minimumSteps(string s) {
            int totalZeroes = 0;
            int currentCount = 0;
            long long totalSwaps = 0;
            int n = s.size();
            for(auto x:s) {
                if(x == '0') {
                    totalZeroes += 1;
                }
            }
            for(int i=0;i<n;i++) {
                if(s[i] == '0') {
                    currentCount += 1;
                    continue;
                }
                totalSwaps += (totalZeroes - currentCount);
            }
            return totalSwaps;
            
        }
    };