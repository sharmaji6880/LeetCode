> **Problem Number:** 3146 <br>
> **Problem Name:** Permutation Difference between Two Strings <br>
> **Problem Link:** [https://leetcode.com/problems/permutation-difference-between-two-strings/](https://leetcode.com/problems/permutation-difference-between-two-strings/) <br>

    class Solution {
    public:
        int findPermutationDifference(string s, string t) {
            map<char,int> m1,m2;
            for(int i=0;i<s.size();i++) {
                m1[s[i]] = i;
            }
            for(int i=0;i<t.size();i++) {
                m2[t[i]] = i;
            }
            int ans = 0;
            for(auto x:m1) {
                ans+=abs(x.second-m2[x.first]);
            }
            return ans;
        }
    };