> **Problem Number:** 3121 <br>
> **Problem Name:** Count the Number of Special Characters II <br>
> **Problem Link:** [https://leetcode.com/problems/count-the-number-of-special-characters-ii/](https://leetcode.com/problems/count-the-number-of-special-characters-ii/) <br>

    class Solution {
    public:
        bool isLower(char c) {
            return c>='a' && c<='z';
        }
        bool isUpper(char c) {
            return c>='A' && c<='Z';
        }
        int numberOfSpecialChars(string word) {
            vector<int> firstOcc(26,-1);
            int num = 0;
            for(int i=0;i<word.size();i++) {
                if( isUpper(word[i]) && firstOcc[word[i]-'A'] == -1 ) {
                    firstOcc[word[i]-'A'] = i;
                    num+=1;
                }
            }
            int count = 0;
            for(int i=0;i<26;i++) {
                if( firstOcc[i] == -1 ) {
                    continue;
                }
                char upperChar = 'A'+ i;
                char lowerChar = 'a' + i;
                
                bool foundToRight = false;
                bool foundToLeft = false;
                
                for(int j=firstOcc[i];j<word.size();j++) {
                    if(word[j] == lowerChar) {
                        foundToRight = true;
                        break;
                    }
                }
                for(int j=0;j<firstOcc[i];j++) {
                    if(word[j] == lowerChar) {
                        foundToLeft = true;
                        break;
                    }
                }
                if(foundToRight || !foundToLeft) {
                    count+=1;
                }

            }
            cout<<num<<endl;
            cout<<count<<endl;
            return num-count;
        }
    };