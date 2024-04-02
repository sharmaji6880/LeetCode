> **Problem Number:** 205 <br>
> **Problem Name:** Isomorphic Strings <br>
> **Problem Link:** [https://leetcode.com/problems/isomorphic-strings/](https://leetcode.com/problems/isomorphic-strings/) <br>

    class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            map<char,char> m;
            for(int i=0;i<s.size();i++) {
                if(m.find(s[i]) == m.end()) {
                    m[s[i]] = t[i];
                }
                else {
                    if(m[s[i]] == t[i]) {
                        continue;
                    }
                    return false;
                }
            }
            set<char> Set;
            for(auto x:m) {
                if(Set.count(x.second)) {
                    return false;
                }
                Set.insert(x.second);
            }
            return true;
        }
    };