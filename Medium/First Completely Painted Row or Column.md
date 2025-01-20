> **Problem Number:** 2661 <br>
> **Problem Name:** First Completely Painted Row or Column <br>
> **Problem Link:** [https://leetcode.com/problems/first-completely-painted-row-or-column](https://leetcode.com/problems/first-completely-painted-row-or-column) <br>

    class Solution {
    public:
        int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
            map<int,pair<int,int>> mp;
            int m = mat.size(), n = mat[0].size();
            vector<long> rowSums(m,0),colSums(n,0);

            int ele;
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    ele = mat[i][j];
                    mp[ele] = {i,j};
                    rowSums[i] += ele;
                    colSums[j] += ele;
                }
            }
            int I,J;
            for(int i=0;i<arr.size();i++) {
                ele = arr[i];
                I = mp[ele].first;
                J = mp[ele].second;
                rowSums[I] -= ele;
                colSums[J] -= ele;
                if(!rowSums[I] || !colSums[J]) {
                    return i;
                }
            }
            return 0;
            
        }
    };