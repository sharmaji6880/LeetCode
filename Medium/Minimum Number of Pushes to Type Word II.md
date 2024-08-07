> **Problem Number:** 3016 <br>
> **Problem Name:** Minimum Number of Pushes to Type Word II <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/](https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-ii/) <br>

    class Solution {
    public:
        static bool cmp(pair<char,int> &a, pair<char,int> &b) {
            return a.second > b.second;
        }
        int minimumPushes(string word) {
            map<char,int> m;
            for(auto x:word) {
                m[x] ++;
            }
            if(m.size() <= 8) {
                return word.size();
            }

            vector< pair<char,int> > v;
            for(auto x:m) {
                v.push_back({x.first,x.second});
            }

            sort(v.begin(),v.end(),cmp);
            int count = 0;
            for(int i=0;i<v.size();i++) {
                if(i < 8) {
                    count += v[i].second;
                    continue;
                }
                count += v[i].second * (i/8 + 1);
            }
            return count;

            return 0;
        }
    };