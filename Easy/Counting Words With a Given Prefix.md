> **Problem Number:** 2185 <br>
> **Problem Name:** Counting Words With a Given Prefix <br>
> **Problem Link:** [https://leetcode.com/problems/counting-words-with-a-given-prefix](https://leetcode.com/problems/counting-words-with-a-given-prefix) <br>

    class Solution {
    public:
        int prefixCount(vector<string>& words, string pref) {
            int len = pref.size(), count = 0;
            for(auto x:words) {
                if(x==pref) {
                    count++;
                    continue;
                }
                if(x.size()<len){
                    continue;
                }
                if(x.substr(0,len)==pref){
                    count++;
                }
            }
            return count;
        }
    };