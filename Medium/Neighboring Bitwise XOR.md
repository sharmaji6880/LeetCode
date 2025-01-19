> **Problem Number:** 2683 <br>
> **Problem Name:** Neighboring Bitwise XOR <br>
> **Problem Link:** [https://leetcode.com/problems/neighboring-bitwise-xor](https://leetcode.com/problems/neighboring-bitwise-xor) <br>

    class Solution {
    public:
        bool doesValidArrayExist(vector<int>& derived) {
        int ans = 0;
        for(auto x:derived) {
            ans ^= x;
        }
        if( ans == 0 ) {
            return true;
        }
        return false;
        }
    };