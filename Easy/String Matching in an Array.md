> **Problem Number:** 1408 <br>
> **Problem Name:** String Matching in an Array <br>
> **Problem Link:** [https://leetcode.com/problems/string-matching-in-an-array](https://leetcode.com/problems/string-matching-in-an-array) <br>

    class Solution {
    public:
        bool isSubstring(string s1,string s2) {
            if(s1==s2) return true;
            if(s1.size()>s2.size()) return false;
            int len = s1.size(), l = 0, r = len -1 ;
            while(r<s2.size()) {
                if(s2.substr(l,len)==s1){
                    return true;
                }
                l++;
                r++;
            }
            return false;
        }
        vector<string> stringMatching(vector<string>& words) {
            vector<string> ans;
            int n = words.size();
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    if(isSubstring(words[i],words[j]) && i!=j) {
                        ans.push_back(words[i]);
                        break;
                    }
                }
            }
            return ans;
        }
    };