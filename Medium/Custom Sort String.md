> **Problem Number:** 791 <br>
> **Problem Name:** Custom Sort String <br>
> **Link:** [https://leetcode.com/problems/custom-sort-string/](https://leetcode.com/problems/custom-sort-string/?envType=daily-question&envId=2024-03-11) <br>

    class Solution {
    public:
        string customSortString(string order, string s) {
            map<char,int> m;
            for(auto x:s) {
                m[x]++;
            }
            string str = "";
            for(int i=0;i<order.size();i++) {
                char c = order[i];
                if(m[c]) {
                    for(int j=0;j<m[c];j++) {
                        str.push_back(c);
                    }
                    m[c]=0;
                }
            };
            for(auto x:m) {
                if(x.second > 0) {
                    for(int i = 0;i<x.second;i++) {
                        str.push_back(x.first);
                    }
                }
            }
            return str;
        }
    };