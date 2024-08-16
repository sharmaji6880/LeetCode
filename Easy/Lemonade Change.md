> **Problem Number:** 860 <br>
> **Problem Name:** Lemonade Change <br>
> **Problem Link:** [https://leetcode.com/problems/lemonade-change/](https://leetcode.com/problems/lemonade-change/0) <br>

    class Solution {
    public:
        bool lemonadeChange(vector<int>& bills) {
            map<int,int> m;

            for(auto x:bills) {
                if( x == 5 ) {
                    m[5] += 1;
                }else if( x == 10 ) {
                    if(!m[5]) {
                        return false;
                    }
                    m[5] -= 1;
                    m[10] += 1;
                }else if( x == 20 ) {
                    m[20] += 1;
                    if( m[10] && m[5] ) {
                        m[10] -= 1;
                        m[5] -= 1;
                    }else if(!m[10] && m[5] >= 3) {
                        m[5] -= 3;
                    }else {
                        return false;
                    }
                }
            }
            return true;
        }
    };