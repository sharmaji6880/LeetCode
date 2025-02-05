> **Problem Number:** 1790 <br>
> **Problem Name:** Check if One String Swap Can Make Strings Equal <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal](https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal) <br>

    class Solution {
    public:
        bool areAlmostEqual(string s1, string s2) {
            if(s1.size() != s2.size()) {
                return false;
            }
            int count = 0, n = s1.size();
            vector<int> arr(26,0);
            for(int i=0;i<n;i++) {
                if(s1[i]!=s2[i]) count++;
                arr[s1[i]-'a']++;
                arr[s2[i]-'a']--;
                if(count > 2) return false;
            }
            if(arr==vector<int>(26,0)) return true;
            return false;
        }
    };