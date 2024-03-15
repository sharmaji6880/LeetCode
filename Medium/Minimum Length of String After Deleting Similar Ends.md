> **Problem Number:** 1750 <br>
> **Problem Name:** Minimum Length of String After Deleting Similar Ends <br>
> **Link:** [https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/](https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/) <br>

    class Solution {
    public:
        int minimumLength(string s) {
            int n = s.size();
            int left=0,right=n-1;
            if(s[left]!=s[right]) {
                return n;
            }
            while(left < right && s[left]==s[right]) {
                char c = s[left];
                while(s[left]==c && left <= right) {
                    left++;
                }
                while(s[right]==c && right >= left) {
                    right--;
                }
            }
            return right-left+1;
        }
    };