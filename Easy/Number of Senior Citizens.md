> **Problem Number:** 2678 <br>
> **Problem Name:** Number of Senior Citizens <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-senior-citizens](https://leetcode.com/problems/number-of-senior-citizens) <br>

    class Solution {
    public:
        int countSeniors(vector<string>& details) {
            int count = 0;
            for(auto x:details) {
                if( stoi(x.substr(11,2)) > 60 ) {
                    count += 1;
                }
            }
            return count;
        }
    };