> **Problem Number:** 2586 <br>
> **Problem Name:** Count the Number of Vowel Strings in Range <br>
> **Problem Link:** [https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range](https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range) <br>

    class Solution {
    public:
        bool isVowel(char c) {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                return true;
            }
            return false;
        }
        int vowelStrings(vector<string>& words, int left, int right) {
            int count = 0;
            for(int i = left; i <= right; i++) {
                if( isVowel(words[i][0]) && isVowel(words[i].back() ) ) {
                    count += 1;
                }
            }
            return count;
        }

    };