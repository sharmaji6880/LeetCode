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
        // This is a custom comparator to sort the items vector
        // as per the price of the item
        static bool cmp(vector<int> &a, vector<int> &b) {
            return a[0] < b[0];
        }

        // This function is used to do custome Binary Search on the items 
        // vector as per our requirement in this problem
        int binarySearch(vector<vector<int>> &items, int &targetPrice, set<int> &s) {
            int left,right,mid;
            left = 0; right = items.size()-1;
            if(s.count(targetPrice)) {
                if(left == right) {
                    return 0;
                }
                if(items[left][0] == targetPrice && items[left+1][0] > targetPrice ) {
                    return left;
                }
                if(items[right][0] == targetPrice) {
                    return right;
                }
                while( left <= right ) {
                    mid = (left + right) / 2;
                    if( items[mid][0] < targetPrice ) {
                        left = mid + 1;
                    }else if( items[mid][0] > targetPrice ) {
                        right = mid - 1;
                    }else if( items[mid][0] == targetPrice && items[mid+1][0] == targetPrice ) {
                        left = mid + 1;
                    }else {
                        return mid;
                    }
                }
            }
            else {
                if(left == right) {
                    if(items[0][0] > targetPrice) {
                        return -1;
                    }else {
                        return 0;
                    }
                }
                if(items[left][0] < targetPrice && items[left+1][0] > targetPrice) {
                    return left;
                }
                if(items[right][0] < targetPrice) {
                    return right;
                }

                while(left <= right) {
                    mid = (left + right) / 2;

                    if(items[mid][0] > targetPrice) {
                        right = mid - 1;
                    }else if( items[mid][0] < targetPrice && items[mid+1][0] < targetPrice ) {
                        left = mid + 1;
                    }else {
                        return mid;
                    }
                }
            }
            return -1;
        }

        vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
            sort(items.begin(),items.end(),cmp);
            set<int> s;
            vector<int> prefixMaxBeauty(items.size(),0);
            for(int i=0;i<prefixMaxBeauty.size();i++) {
                s.insert(items[i][0]);
                if( i == 0 ) {
                    prefixMaxBeauty[i] = items[i][1];
                    continue;
                }
                prefixMaxBeauty[i] = max(prefixMaxBeauty[i-1],items[i][1]);
            }
            int n = queries.size();
            vector<int> result(n,0);
            int targetPrice;
            int returnedIndex;
            for(int i=0;i<n;i++) {
                targetPrice = queries[i];
                returnedIndex = binarySearch(items,targetPrice,s);
                if(returnedIndex != -1) {
                    result[i] = prefixMaxBeauty[returnedIndex];
                }
            }
            return result;
        }
    };