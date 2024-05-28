> **Problem Number:** 3163 <br>
> **Problem Name:** String Compression III <br>
> **Problem Link:** [https://leetcode.com/problems/string-compression-iii/](https://leetcode.com/problems/string-compression-iii/) <br>

    class Solution {
    public:
        string compressedString(string word) {
            queue<pair<char,int>> q;
            for(int i=0;i<word.size();i++) {
                if(q.empty()) {
                    q.push({word[i],1});
                    continue;
                }
                if(q.back().first == word[i] ) {
                    if(q.back().second == 9) {
                        q.push({word[i],1});
                    }else if(q.back().second < 9) {
                        q.back().second++;
                    }
                }else {
                    q.push({word[i],1});
                }
            }
            string ans = "";
            while(!q.empty()) {
                ans+= (to_string(q.front().second));
                ans+= (q.front().first);
                q.pop();
            }
            return ans;
        }
    };