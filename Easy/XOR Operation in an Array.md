> **Problem Number:** 1486 <br>
> **Problem Name:** XOR Operation in an Array <br>
> **Problem Link:** [https://leetcode.com/problems/xor-operation-in-an-array/](https://leetcode.com/problems/xor-operation-in-an-array/) <br>

    class Solution {
    public:
        int xorOperation(int n, int start) {
            int ans = 0;
            for(int i=0;i<n;i++) {
                ans = ans ^ (start + 2 * i);
            }
            return ans;
        }
    };