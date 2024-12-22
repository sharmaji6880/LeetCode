> **Problem Number:** 2124 <br>
> **Problem Name:** Check if All A's Appears Before All B's <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-all-as-appears-before-all-bs](https://leetcode.com/problems/check-if-all-as-appears-before-all-bs) <br>

    class Solution {
    public:
        bool checkString(string s) {
            bool flag = false;
            for( auto x:s ) {
                if( x == 'b') {
                    flag = true;
                }else {
                    if(flag) {
                        return false;
                    }
                }
            }
            return true;
        }
    };