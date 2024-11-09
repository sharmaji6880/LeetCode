> **Problem Number:** 3340 <br>
> **Problem Name:** Check Balanced String <br>
> **Problem Link:** [https://leetcode.com/problems/check-balanced-string](https://leetcode.com/problems/check-balanced-string) <br>

    class Solution {
    public:
        bool isBalanced(string num) {
            int oddIndexSum = 0, evenIndexSum = 0;
            int n = num.size();
            for(int i=0;i<n;i++) {
                i%2? oddIndexSum += num[i]-'0':evenIndexSum += num[i]-'0';
            }
            return oddIndexSum == evenIndexSum? true:false;
        }
    };