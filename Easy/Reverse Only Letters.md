> **Problem Number:** 917 <br>
> **Problem Name:** Reverse Only Letters <br>
> **Problem Link:** [https://leetcode.com/problems/reverse-only-letters/](https://leetcode.com/problems/reverse-only-letters/) <br>

    class Solution {
    public:
        bool isLetter(char c) {
            if(c-'A'>=0 && c-'A'<=25) {
                return true;
            }
            if(c-'a'>=0 && c-'a'<=25) {
                return true;
            }
            return false;
        }
        string reverseOnlyLetters(string s) {
            vector<int> arr;
            for(auto x:s) {
                if(isLetter(x)) {
                    arr.push_back(x);
                }
            }
            int index = arr.size()-1;
            for(auto &x:s) {
                if(isLetter(x)) {
                    x = arr[index];
                    index--;
                }
            }
            return s;
        }
    };