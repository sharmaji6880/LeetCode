> **Problem Number:** 3084 <br>
> **Problem Name:** Count Substrings Starting and Ending with Given Character <br>
> **Link:** [https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/description/](https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/description/) <br>

    class Solution {
    public:
        long long countSubstrings(string s, char c) {
            long count = 0;
            for(auto x:s) {
                if(x==c) {
                    count++;
                }
            }
            if(count == 0) {
                return 0;
            }
            return count * (count - 1) / 2 + count;
        }
    };