> **Problem Number:** 3042 <br>
> **Problem Name:** Count Prefix and Suffix Pairs I <br>
> **Problem Link:** [https://leetcode.com/problems/count-prefix-and-suffix-pairs-i](https://leetcode.com/problems/count-prefix-and-suffix-pairs-i) <br>

    class Solution {
    public:
        bool isPrefixAndSuffix(string &s1,string &s2) {
            if(s1==s2) return true;
            if(s1.size()>s2.size()) return false;
            int size = s1.size();
            if(s2.substr(0,size)==s1 && s2.substr(s2.size()-size,size)==s1) return true;
            return false;
        }
        int countPrefixSuffixPairs(vector<string>& words) {
            int n = words.size(),count = 0;
            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    if(isPrefixAndSuffix(words[i],words[j])) count++;
                }
            }
            return count;
        }
    };