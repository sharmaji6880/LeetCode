> **Problem Number:** 1684 <br>
> **Problem Name:** Count the Number of Consistent Strings <br>
> **Problem Link:** [https://leetcode.com/problems/count-the-number-of-consistent-strings/](https://leetcode.com/problems/count-the-number-of-consistent-strings/) <br>

    class Solution {
    public:
        int countConsistentStrings(string allowed, vector<string>& words) {
            set<char> allowedChars;
            for(auto x:allowed) {
                allowedChars.insert(x);
            }
            int count = 0;
            int n;
            bool skipWord;
            for(auto x:words) {
                skipWord = false;
                n = x.size();
                for(int i=0;i<n;i++) {
                    if(allowedChars.count(x[i]) == 0) {
                        skipWord = true;
                        break;
                    }
                }
                if(skipWord == false) {
                    count += 1;
                }
            }
            return count;
        }
    };