> **Problem Number:** 2000 <br>
> **Problem Name:** Reverse Prefix of Word <br>
> **Problem Link:** [https://leetcode.com/problems/reverse-prefix-of-word/](https://leetcode.com/problems/reverse-prefix-of-word/) <br>

    class Solution {
    public:
        string reversePrefix(string word, char ch) {
            int n = word.size();
            int index = -1;
            for(int i=0;i<n;i++) {
                if(word[i] == ch) {
                    index = i;
                    break;
                }
            }
            if(index == -1) {
                return word;
            }
            for(int i=0;i<(index+1)/2;i++) {
                char temp = word[i];
                word[i] = word[index-i];
                word[index-i] = temp;
            }
            return word;
        }
    };