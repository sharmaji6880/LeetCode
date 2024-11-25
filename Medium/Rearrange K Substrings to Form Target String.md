> **Problem Number:** 3365 <br>
> **Problem Name:** Rearrange K Substrings to Form Target String <br>
> **Problem Link:** [https://leetcode.com/problems/rearrange-k-substrings-to-form-target-string](https://leetcode.com/problems/rearrange-k-substrings-to-form-target-string) <br>

    class Solution {
    public:
        bool isPossibleToRearrange(string s, string t, int k) {
            int n = s.size();
            int substrSize = n / k;
            map<string,int> m1,m2;
            string str;
            for(int i=0;i<=n-substrSize;i+=substrSize) {
                str = s.substr(i,substrSize);
                m1[str]++;
                str = t.substr(i,substrSize);
                m2[str]++;
            }
            return m1 == m2? true:false;
        }
    };