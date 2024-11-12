> **Problem Number:** 2070 <br>
> **Problem Name:** Most Beautiful Item for Each Query <br>
> **Problem Link:** [https://leetcode.com/problems/most-beautiful-item-for-each-query](https://leetcode.com/problems/most-beautiful-item-for-each-query) <br>

**Using Brute Force** <br>

    // Time Complexity: O(n^2)
    // This is a brute force approach and for larger test cases,
    // it might result into TLE
    class Solution {
    public:
        vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
            int n = queries.size();
            vector<int> answer(n,0);
            int maxBeauty;

            for(int i=0;i<n;i++) {
                maxBeauty = INT_MIN;
                for(int j=0;j<items.size();j++) {
                    if(items[j][0] <= queries[i] && items[j][1] > maxBeauty) {
                        maxBeauty = items[j][1];
                    }
                }
                answer[i] = max(0,maxBeauty);
            }
            return answer;
        }
    };