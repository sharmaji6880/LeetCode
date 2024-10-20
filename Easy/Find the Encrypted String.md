> **Problem Number:** 3210 <br>
> **Problem Name:** Find the Encrypted String <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-encrypted-string](https://leetcode.com/problems/find-the-encrypted-string) <br>

    class Solution {
    public:
        string getEncryptedString(string s, int k) {
            int n = s.size();
            k %= n;
            s = s.substr(k,n-k) + s.substr(0,k);
            return s;
        }
    };