> **Problem Number:** 435 <br>
> **Problem Name:** Non-overlapping Intervals <br>
> **Problem Link:** [https://leetcode.com/problems/non-overlapping-intervals](https://leetcode.com/problems/non-overlapping-intervals)

    class Solution {
    public:

        bool isOverlapping(vector<int> &a, vector<int> &b) {
            return b[0]  < a[1] && b[1] > a[0];
        }
        int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
            int count1 = 0, count2 = 0,  n = intervals.size();
            vector<int> prev;

            for(int i=0;i<n;i++) {
                if( i == 0 ) {
                    prev = intervals[i];
                    count1++;
                    continue;
                }
                if( isOverlapping( intervals[i], prev ) ) {
                    continue;
                } else {
                    count1++;
                    prev = intervals[i];
                }
            }
            for(int i=n-1;i>=0;i--) {
                if( i == n-1 ) {
                    prev = intervals[i];
                    count2++;
                    continue;
                }
                if( isOverlapping( intervals[i], prev ) ) {
                    continue;
                } else {
                    count2++;
                    prev = intervals[i];
                }
            }
            
            return n- max(count1,count2) ;
        }
    };