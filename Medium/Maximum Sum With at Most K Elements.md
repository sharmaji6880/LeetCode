> **Problem Number:** 3462 <br>
> **Problem Name:** Maximum Sum With at Most K Elements <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-sum-with-at-most-k-elements](https://leetcode.com/problems/maximum-sum-with-at-most-k-elements) <br>

    class Solution {
    public:
        static bool cmp(pair<int,int> &a, pair<int,int> &b) {
            return a.first < b.first;
        }
        long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
            vector<pair<int,int>> arr;
            int m = grid.size(), n = grid[0].size();
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    arr.push_back({grid[i][j],i});
                }
            }
            sort(arr.begin(),arr.end(),cmp);
            long sum = 0;
            n = arr.size()-1;
            int num,rowNum;
            while(n>=0 && k) {
                num = arr[n].first;
                rowNum = arr[n].second;
                if(limits[rowNum]) {
                    sum += num;
                    limits[rowNum]--;
                    k--;
                }
                n--;
            }
            return sum;
        }
    };