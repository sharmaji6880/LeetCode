> **Problem Number:** 290 <br>
> **Problem Name:** Word Pattern <br>
> **Problem Link:** [https://leetcode.com/problems/word-pattern/](https://leetcode.com/problems/word-pattern/) <br>

    class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            vector<string> words;
            int prevIndex = 0;

            for( int i = 0 ; i < s.size() ; i++ ) {
                if( s[i] == ' ' ) {
                    words.push_back(s.substr(prevIndex,i-prevIndex));
                    prevIndex = i+1 ;
                    continue;
                }
                if(i == s.size() - 1) {
                    words.push_back(s.substr(prevIndex, i-prevIndex+1));
                }
            }

            if(pattern.size() != words.size()) {
                return false;
            }
            
            map<char,string> m1;
            map<string,char> m2;

            int n = pattern.size();

            for(int i=0;i<n;i++) {
                if(m1.find(pattern[i]) == m1.end()) {
                    m1[pattern[i]] = words[i];
                    continue;
                }
                if(m1[pattern[i]] != words[i]) {
                    return false;
                }
            }
            for(int i=0;i<n;i++) {
                if(m2.find(words[i]) == m2.end()) {
                    m2[words[i]] = pattern[i];
                    continue;
                }
                if(m2[words[i]] != pattern[i]) {
                    return false;
                }
            }
            
            return true;
        }
    };