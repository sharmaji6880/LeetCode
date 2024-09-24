> **Problem Number:** 3295 <br>
> **Problem Name:** Report Spam Message <br>
> **Problem Link:** [https://leetcode.com/problems/report-spam-message/](https://leetcode.com/problems/report-spam-message/) <br>

    class Solution {
    public:
        bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
            set<string> banned;
            for(auto x:bannedWords) {
                banned.insert(x);
            }
            int count = 0;

            for(auto x:message) {
                if(banned.count(x)) {
                    count += 1;
                }
                if(count == 2) {
                    return true;
                }
            }
            return false;
        }
    };