> **Problem Number:** 3412 <br>
> **Problem Name:** Find Mirror Score of a String <br>
> **Problem Link:** [https://leetcode.com/problems/find-mirror-score-of-a-string](https://leetcode.com/problems/find-mirror-score-of-a-string) <br>

    class Solution {
    public:
        char mirror(char c) {
            return 122-c+97;
        }
        long long calculateScore(string s) {
            long long score = 0;
            vector<int> marked(s.size(),0);
            map<char,stack<int>> m;
            char c;
            for(int i=0;i<s.size();i++) {
                m[s[i]].push(i);
                if(!i) continue;
                c = mirror(s[i]);
                if(m.find(c) == m.end()) {
                    continue;
                }
                while( !m[c].empty() && marked[m[c].top()] ) {
                    m[c].pop();
                }
                if(m[c].empty()) {
                    continue;
                }
                score += i - m[c].top();
                marked[i] = 1 ;
                marked[m[c].top()] = 1;
                m[c].pop();
            }
            return score;
        }
    };