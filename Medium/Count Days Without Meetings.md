> **Problem Number:** 3169 <br>
> **Problem Name:** Count Days Without Meetings <br>
> **Problem Link:** [https://leetcode.com/problems/count-days-without-meetings](https://leetcode.com/problems/count-days-without-meetings) <Br>

    class Solution {
    public:

        static bool cmp(vector<int> a, vector<int> b) {
            return a[0] < b[0];
        }

        bool isOverlapping(vector<int> &a, vector<int> &b) {
            if(b[0] <= a[1] && b[1] >= a[0]) {
                return true;
            }
            return false;
        }

        vector<int> merge(vector<int> &a, vector<int> &b) {
            vector<int> arr;
            arr.push_back(min(a[0],b[0]));
            arr.push_back(max(a[1],b[1]));
            
            return arr;
        }

        int countDays(int days, vector<vector<int>>& meetings) {
            sort(meetings.begin(),meetings.end(),cmp);
            vector<vector<int>> arr;
            vector<int> back;
            for(int i = 0; i < meetings.size() ; i++) {
                if(arr.empty()) {
                    arr.push_back(meetings[i]);
                    continue;
                }
                if(isOverlapping(arr.back(),meetings[i])) {
                    back = arr.back();
                    arr.pop_back();
                    arr.push_back(merge(back,meetings[i]));
                }else {
                    arr.push_back(meetings[i]);
                }
            }

            int meetingsScheduled = arr.back()[1] - arr[0][0] + 1;

            for(int i = 0; i < arr.size(); i++) {
                if(i == arr.size() - 1) {
                    continue;
                }
                meetingsScheduled -= arr[i+1][0] - arr[i][1] - 1;
            }
            return days - meetingsScheduled;


        }
    };