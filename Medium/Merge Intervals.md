> **Problem Number:** 56 <br>
> **Problem Name:** Merge Intervals <br>
> **Problem Link:** [https://leetcode.com/problems/merge-intervals/](https://leetcode.com/problems/merge-intervals/) <br>

    class Solution {
    public:
        bool isOverlapping(vector<int> &arr1, vector<int> &arr2) {
            int a = arr1[1];
            int b = arr2[0];
            if( b <= a ) {
                return true;
            }
            return false;
        }
        static bool cmp(vector<int> &arr1, vector<int> &arr2) {
            return arr1[0] < arr2[0];
        }
        vector<int> mergedInterval(vector<int> &arr1, vector<int> &arr2) {
            vector<int> arr;
            arr.push_back(min(arr1[0],arr2[0]));
            arr.push_back(max(arr1[1],arr2[1]));
            return arr;
        }
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin(),intervals.end(),cmp);
            vector< vector<int> > ans;
            for(int i=0; i < intervals.size(); i++) {
                if(ans.empty()) {
                    ans.push_back(intervals[i]);
                    continue;
                }
                if(isOverlapping(ans.back(),intervals[i])) {
                    vector<int> arr = ans.back();
                    ans.pop_back();
                    ans.push_back(mergedInterval(arr,intervals[i]));
                }else {
                    ans.push_back(intervals[i]);
                }

            }
            return ans;

        }
    };