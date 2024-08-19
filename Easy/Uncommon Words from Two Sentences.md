> **Problem Number:** 884 <br>
> **Problem Name:** Uncommon Words from Two Sentences <br>
> **Problem Link:** [https://leetcode.com/problems/uncommon-words-from-two-sentences/](https://leetcode.com/problems/uncommon-words-from-two-sentences/) <br>

    class Solution {
    public:
        vector<string> uncommonFromSentences(string s1, string s2) {
            vector<string> words1,words2;
            int prev = 0;
            for(int i=0;i<s1.size();i++) {
                if(s1[i] == ' ') {
                    words1.push_back(s1.substr(prev,i-prev));
                    prev = i+1;
                }
                if(i == s1.size()-1) {
                    words1.push_back(s1.substr(prev,i-prev+1));
                }
            }
            prev = 0;
            for(int i=0;i<s2.size();i++) {
                if(s2[i] == ' ') {
                    words2.push_back(s2.substr(prev,i-prev));
                    prev = i+1;
                }
                if(i == s2.size()-1) {
                    words2.push_back(s2.substr(prev,i-prev+1));
                }
            }

            map<string,int> m1,m2;

            for(auto x:words1) {
                m1[x]++;
            }
            
            for(auto x:words2) {
                m2[x]++;
            }
            
            vector<string> ans;
            for(auto x:m1) {
                if(x.second == 1 && !m2.count(x.first)) {
                    ans.push_back(x.first);
                }
            }
            for(auto x:m2) {
                if(x.second == 1 && !m1.count(x.first)) {
                    ans.push_back(x.first);
                }
            }
            return ans;

        }
    };