> **Problem Number:** 2070 <br>
> **Problem Name:** Most Beautiful Item for Each Query <br>
> **Problem Link:** [https://leetcode.com/problems/most-beautiful-item-for-each-query](https://leetcode.com/problems/most-beautiful-item-for-each-query) <br>

**Using Brute Force:** <br>

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

**Using Optimal Solution:** <br>

    class Solution {
    public:
        int binarySearch(vector<vector<int>> &items, int &targetPrice) {
            int l = 0, r = items.size()-1,mid;
            int maxBeauty = 0;
            while(l <= r) {
                mid = (l+r) / 2;
                if(items[mid][0] <= targetPrice) {
                    maxBeauty = max(maxBeauty,items[mid][1]);
                    l = mid + 1;
                }else {
                    r = mid - 1;
                }
            }
            return maxBeauty;
        }
        vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
            sort(items.begin(),items.end());
            int n = items.size();
            for(int i=1;i<n;i++) {
                items[i][1] = max(items[i][1],items[i-1][1]);
            }
            n = queries.size();
            vector<int> answer(n);
            for(int i=0;i<n;i++) {
                answer[i] = binarySearch(items,queries[i]);
            }

            return answer;
        }
    };