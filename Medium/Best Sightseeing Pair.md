> **Problem Number:** 1014 <br>
> **Problem Name:** Best Sightseeing Pair <br>
> **Problem Link:** [https://leetcode.com/problems/best-sightseeing-pair](https://leetcode.com/problems/best-sightseeing-pair) <br>

    class Solution {
    public:
        int maxScoreSightseeingPair(vector<int>& values) {
            int n = values.size();
            int maxScore = INT_MIN,val;
            set<int> s;
            for(int i=0;i<n;i++) {
                if( i == 0 ) {
                    s.insert(values[i]+i);
                    continue;
                }
                val = *(--s.end()) + values[i] - i;
                if( val > maxScore ) {
                    maxScore = val;
                }
                s.insert(i+values[i]);
            }
            return maxScore;
        }
    };