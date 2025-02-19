> **Problem Number:** 1079 <br>
> **Problem Name:** Letter Tile Possibilities <br>
> **Problem Link:** [https://leetcode.com/problems/letter-tile-possibilities](https://leetcode.com/problems/letter-tile-possibilities) <br>

    class Solution {
    public:
        void dfs(string &s, int size, map<char,int> &m, int &count) {
            if(size == 0) {
                count += 1;
                return;
            }
            for(auto &x:m) {
                if(x.second) {
                    s.push_back(x.first);
                    x.second -= 1;
                    dfs(s,size-1,m,count);
                    x.second += 1;
                    s.pop_back();
                } 
            }
        }
        int numTilePossibilities(string tiles) {
            int n = tiles.size(), count = 0;
            string s;
            map<char,int> m;
            for(auto x:tiles) {
                m[x]++;
            }
            for(int i=1;i<=n;i++) {
                s = "";
                dfs(s,i,m,count);
            }
            return count;
        }
    };