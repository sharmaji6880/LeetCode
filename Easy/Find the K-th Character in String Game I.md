> **Problem Number:** 3304 <br>
> **Problem Name:** Find the K-th Character in String Game I <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-k-th-character-in-string-game-i](https://leetcode.com/problems/find-the-k-th-character-in-string-game-i) <br>

    class Solution {
    public:
        char kthCharacter(int k) {
            string word = "a";
            string dummy;
            while(word.size() < k) {
                dummy = "";

                for(int i=0;i<word.size();i++) {
                    if(word[i] == 122) {
                        dummy.push_back('a');
                        continue;
                    }
                    dummy.push_back( word[i] + 1 );
                }
                word += dummy;
            }
            cout<<word;
            return word[k-1];
        }
    };