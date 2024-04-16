> **Problem Number:** 3090 <br>
> **Problem Name:** Maximum Length Substring With Two Occurrences <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/](https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/) <br>

    class Solution {
    public:
        int maximumLengthSubstring(string s) {
            int maxLen = 0;
            for(int i=0;i<s.size();i++) {
                for(int j=i;j<s.size();j++) {
                    map<char,int> m;
                    for(int k=i;k<=j;k++) {
                        m[s[k]]++;
                        if(m[s[k]] > 2) {
                            if(k-i > maxLen) {
                                cout<<i<<" "<<k<<endl;
                                maxLen = k-i;
                            }
                            break;
                        }
                        if(k==s.size()-1) {
                            if(k-i+1 > maxLen) {
                                maxLen = k-i+1;
                            }
                        }
                    }
                }
            }
            return maxLen;
        }
    };