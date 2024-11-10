> **Problem Number:** 9 <br>
> **Problem Name:** Palindrome Number <br>
> **Problem Link:** [https://leetcode.com/problems/palindrome-number](https://leetcode.com/problems/palindrome-number) <br>

**Using Extra Space:** <br>

    class Solution {
    public:
        bool isPalindrome(int x) {
            if(x < 0 ) {
                return false;
            }
            string s = to_string(x);
            string reverse = "";

            for(int i=s.size()-1;i>=0;i--) {
                reverse.push_back(s[i]);
            }
            if(s == reverse) {
                return true;
            }
            return false;
        }
    };

**Without Extra Space:** <br>

    class Solution {
    public:
        bool isPalindrome(int x) {
            if(x < 0 ) {
                return false;
            }
            string s = to_string(x);
            
            int l = 0, r = s.size()-1;

            while(l <= r) {
                if(s[l] != s[r]) {
                    return false;
                }
                l++;
                r--;
            }
            return true;
        }
    };