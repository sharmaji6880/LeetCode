> **Problem Number:** 58 <br>
> **Problem Name:** Spiral Matrix <br>
> **Problem Link:** [https://leetcode.com/problems/spiral-matrix](https://leetcode.com/problems/spiral-matrix) <br>

    class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            int m = matrix.size(); // Here, m = 3  ( In Test Case 1)
            int n = matrix[0].size(); // Here, n = 2 ( In Test Case 1)
            int numofEle = m * n;

            vector<int> ans;
            set< pair<int,int> > s;

            int direction = 0;

            int i = 0, j = 0;

            while(true) {
                if(direction == 0) {
                    if( s.count({i,j}) == 0 ) {
                        ans.push_back(matrix[i][j]);
                        s.insert({i,j});
                    }
                    if( j == n-1  || s.count({i,j+1}) ) {
                        i += 1;
                        direction = 1;
                    }else {
                        j += 1;
                    }
                }else if(direction == 1) {
                    if(s.count({i,j}) == 0) {
                        ans.push_back(matrix[i][j]);
                        s.insert({i,j});
                    }
                    if( i == m-1 || s.count({i+1,j})) {
                        j -= 1;
                        direction = 2;
                    }else {
                        i += 1;
                    }
                }else if(direction == 2) {
                    if(s.count({i,j}) == 0 ) {
                        ans.push_back(matrix[i][j]);
                        s.insert({i,j});
                    }
                    if( j == 0 || s.count({i,j-1}) ) {
                        i -= 1;
                        direction = 3;
                    }else {
                        j -= 1;
                    }
                }else if(direction == 3) {
                    if(s.count({i,j}) == 0 ) {
                        ans.push_back(matrix[i][j]);
                        s.insert({i,j});
                    }
                    if(i == 0 || s.count({i-1,j})) {
                        j += 1;
                        direction = 0;
                    }else {
                        i -= 1;
                    }
                }
                if(ans.size() == numofEle) {
                    break;
                }
            }
            return ans;
        }
    };