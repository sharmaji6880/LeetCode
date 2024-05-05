> **Problem Number:** 3136 <br>
> **Problem Name:** Valid Word <br>
> **Problem Link:** [https://leetcode.com/problems/valid-word/](https://leetcode.com/problems/valid-word/) <br>

    class Solution {
    public:
        bool isDigit(char c) {
            if(c-'0' >=0 && c-'0' <= 9) {
                return true;
            }
            return false;
        }
        bool isLower(char c) {
            if(c-'a'>=0 && c-'a'<=25) {
                return true;
            }
            return false;
        }
        bool isUpper(char c) {
            if(c-'A'>=0 && c-'A'<=25) {
                return true;
            }
            return false;
        }
        bool isVowel(char c) {
            if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c =='I' || c=='o' || c=='O' || c=='u' || c=='U') {
                return true;
            }
            return false;
        }
        bool isConsonant(char c) {
            if(isVowel(c)) {
                return false;
            }
            if(c-'a'>=0 && c-'a'<=25) {
                return true;
            }
            if(c-'A'>=0 && c-'A'<=25) {
                return true;
            }
            return false;
        }
        bool isValid(string word) {
            if(word.size() < 3) {
                return false;
            }
            bool f1 = false, f2 = false, f3 = false;
            for(int i=0;i<word.size();i++) {
                if( isDigit(word[i]) || isLower(word[i]) || isUpper(word[i]) ) {
                    f1 = true;
                }
                if(isVowel(word[i])) {
                    f2 = true;
                    continue;
                }
                if(isConsonant(word[i])) {
                    f3 = true;
                    continue;
                }
                if(!isDigit(word[i])) {
                    return false;
                }
            }
            return f1 && f2 && f3;
            
        }
    };