> **Problem Number:** 57 <br>
> **Problem Name:** Insert Interval <br>
> **Problem Link:** [https://leetcode.com/problems/insert-interval/](https://leetcode.com/problems/insert-interval/) <br>

    class Solution {
    public:
        bool isOverlapping(vector<int> &a, vector<int> &b) {
            if(b[0] <= a[1] && b[1] >= a[0]) {
                return true;
            } 
            return false;
        }
        static bool cmp( vector<int> &a, vector<int> &b) {
            return a[0] < b[0];
        }
        vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
            if(intervals.empty()) {
                return {newInterval};
            }
            vector< vector<int> > ans;
            int left = -1 , right = -1;


            for(int i =0;i<intervals.size();i++) {
                if(isOverlapping(intervals[i],newInterval)) {
                    left = i;
                    break;
                }
            }
            for(int i=intervals.size()-1; i>=0; i--) {
                if(isOverlapping(intervals[i],newInterval)) {
                    right = i;
                    break;
                }
            }
            if(left == -1) {
                intervals.push_back(newInterval);
                sort(intervals.begin(),intervals.end(),cmp);
                return intervals;
            }
            for(int i =  0; i < left ; i++) {
                ans.push_back(intervals[i]);
            }
            vector<int> arr;

            arr.push_back(min(newInterval[0],intervals[left][0]));
            arr.push_back(max(newInterval[1],intervals[right][1]));
            ans.push_back(arr);
            
            for(int i = right + 1; i < intervals.size(); i++) {
                ans.push_back(intervals[i]);
            }

            return ans;

        }
    };