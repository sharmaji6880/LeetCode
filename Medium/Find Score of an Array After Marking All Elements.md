> **Problem Number:** 2593 <br>
> **Problem Name:** Find Score of an Array After Marking All Elements <br>
> **Problem Link:** [https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements](https://leetcode.com/problems/find-score-of-an-array-after-marking-all-elements) <br>

    class Solution {
    public:
        long long findScore(vector<int>& nums) {
            long long score = 0;
            int n = nums.size();
            vector<vector<int>> arr;
            for(int i=0;i<n;i++) {
                arr.push_back({nums[i],i});
            }
            sort(arr.begin(),arr.end());
            set<int> marked;
            int a,b;

            for(int i=0;i<n;i++) {
                a = arr[i][0];
                b = arr[i][1];

                if( marked.count(b) ) {
                    continue;
                }
                score += a;
                marked.insert(b);
                if( b - 1 >= 0 ) {
                    marked.insert(b-1);
                }
                if( b + 1 < n ) {
                    marked.insert(b+1);
                }
            }
            return score;
        }
    };