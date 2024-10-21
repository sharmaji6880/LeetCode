> **Problem Number:** 3325 <br>
> **Problem Name:** Count Substrings With K-Frequency Characters I <br>
> **Problem Link:** [https://leetcode.com/problems/count-substrings-with-k-frequency-characters-i](https://leetcode.com/problems/count-substrings-with-k-frequency-characters-i) <br>

**Brute Force:**

    // This is a pure Brute Force Solution
    // This might result into TLE for larger inputs
    class Solution {
    public:
        int numberOfSubstrings(string s, int k) {
            map<char,int> mp;
            int count = 0;
            int n = s.size();
            for(int i=0;i<n;i++) {
                for(int j=i;j<n;j++) {
                    mp.clear();
                    for(int k=i;k<=j;k++) {
                        mp[s[k]]++;
                    }
                    for(auto x:mp) {
                        if(x.second >= k) {
                            count += 1;
                            break;
                        }
                    }
                }
            }
            return count;
        }
    };