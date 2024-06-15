> **Problem Number:** 1967 <br>
> **Problem Name:** Number of Strings That Appear as Substrings in Word <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/](https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/) <br>

**Using Built-in Method:** <br>

    class Solution {
    public:
        int numOfStrings(vector<string>& patterns, string word) {
            int count = 0;
            for(auto x:patterns) {
                if(word.find(x) != string::npos) {
                    count+=1;
                }
            }
            return count;
        }
    };

**Using Custom Search:** <br>

    class Solution {
    public:
        int numOfStrings(vector<string>& patterns, string word) {
            int count = 0;
            int n = word.size();
            for(int i=0;i<patterns.size();i++) {

                int len = patterns[i].size();

                for(int j = 0 ; j < n - len + 1 ; j++ ) {
                    if( word.substr(j,len) == patterns[i] ) {
                        count += 1;
                        break;
                    }
                }
            }
            return count;
        }
    };