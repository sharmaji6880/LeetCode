> **Problem Number:** 2022 <br>
> **Problem Name:** Convert 1D Array Into 2D Array <br>
> **Problem Link:** [https://leetcode.com/problems/convert-1d-array-into-2d-array/description/](https://leetcode.com/problems/convert-1d-array-into-2d-array/description/) <br>

    class Solution {
    public:
        vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
            if( m*n != original.size() ) {
                return {};
            }
            vector<vector<int>> ans; // meant to store the entire 2d array and is initially empty
            vector<int> arr; // meant to store the rows of the 2d array temporarily and is appended periodically to the original 2d array
            for(int i=0;i<m;i++) {
                arr = {};
                for(int j=0;j<n;j++) {
                    arr.push_back(original[n*i + j]);
                }
                ans.push_back(arr);
            }
            return ans;
        }
    };