> **Problem Number:** 2559 <br>
> **Problem Name:** Count Vowel Strings in Ranges <br>
> **Problem Link:** [https://leetcode.com/problems/count-vowel-strings-in-ranges](https://leetcode.com/problems/count-vowel-strings-in-ranges) <br>

    class Solution {
    public:
        bool isVowel(char c) {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
                return true;
            }
            return false;
        }
        vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
            int n = words.size();
            vector<int> arr(n,0);
            for(int i=0;i<n;i++) {
                if(i==0) {
                    if( isVowel(words[i].back()) && isVowel(words[i].front()) ) {
                        arr[i] = 1;
                    }
                    continue;
                }
                if( isVowel(words[i].front()) && isVowel(words[i].back()) ) {
                    arr[i] = arr[i-1] + 1;
                }else {
                    arr[i] = arr[i-1];
                }
            }
            vector<int> ans(queries.size(),0);
            int first,second;
            for(int i=0;i<queries.size();i++) {
                first = queries[i][0];
                second = queries[i][1];
                ans[i] = arr[second] - ( first==0? 0:arr[first-1]);
            }
            return ans;
        }
    };