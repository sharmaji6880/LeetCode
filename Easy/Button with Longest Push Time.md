> **Problem Number:** 3386 <br>
> **Problem Name:** Button with Longest Push Time <br>
> **Problem Link:** [https://leetcode.com/problems/button-with-longest-push-time](https://leetcode.com/problems/button-with-longest-push-time) <br>

    class Solution {
    public:
        int buttonWithLongestTime(vector<vector<int>>& events) {
            int maxTime = INT_MIN, timeTaken, index, n = events.size();
            for(int i=0;i<n;i++) {
                if( i == 0 ) {
                    maxTime = events[i][1];
                    index = events[i][0];
                    continue;
                }
                timeTaken = events[i][1] - events[i-1][1];
                if( timeTaken > maxTime ) {
                    maxTime = timeTaken;
                    index = events[i][0];
                }else if( timeTaken == maxTime ) {
                    index = min(index,events[i][0]);
                }
            }
            return index;
        }
    };