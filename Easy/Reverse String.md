> **Problem Number:** 344 <br>
> **Problem Name:** Reverse String <br>
> **Problem Link:** [https://leetcode.com/problems/reverse-string/](https://leetcode.com/problems/reverse-string/) <br>

    class Solution {
    public:
        void reverseString(vector<char>& s) {
            int n=s.size();
            for(int i=0;i<n/2;++i) {
                char temp=s[i];
                s[i]=s[n-1-i];
                s[n-1-i]=temp;
            }
        }
    };