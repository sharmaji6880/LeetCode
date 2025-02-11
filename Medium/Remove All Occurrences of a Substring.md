> **Problem Number:** 1910 <br>
> **Problem Name:** Remove All Occurrences of a Substring <br>
> **Problem Link:** [https://leetcode.com/problems/remove-all-occurrences-of-a-substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring) <br>

    class Solution {
    public:
        string removeOccurrences(string s, string part) {
            int n = s.size(), m = part.size(), i = 0;
            string ans = "";

            while(i<n) {
                ans.push_back(s[i]);
                if(ans.size() < m) {
                    i++;
                    continue;
                }
                if(ans.substr(ans.size()-m,m) == part) {
                    ans = ans.substr(0,ans.size()-m);
                }
                i++;
            }
            
            return ans;
        }
    };