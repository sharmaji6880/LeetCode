> **Problem Number:** 3417 <br>
> **Problem Name:** Zigzag Grid Traversal With Skip <br>
> **Problem Link:** [https://leetcode.com/problems/zigzag-grid-traversal-with-skip](https://leetcode.com/problems/zigzag-grid-traversal-with-skip) <br>

    class Solution {
    public:
        vector<int> zigzagTraversal(vector<vector<int>>& grid) {
            int m = grid.size(), n = grid[0].size(), i = 0, j = 0,count;
            vector<int> ans;
            char direction = 'r';
            bool flag = true;
            if( (m*n) % 2 ) {
                count = (m*n)/2 + 1;
            }else {
                count = (m*n)/2;
            }

            while(ans.size() != count) {
                if(flag) {
                    ans.push_back(grid[i][j]);
                    flag = false;
                }else {
                    flag = true;
                }
                if(direction=='r') {
                    if(j<n-1) {
                        j++;
                    }else {
                        i++;
                        direction = 'l';
                    }
                }
                else if(direction=='l') {
                    if(j>0) {
                        j--;
                    }else {
                        i++;
                        direction = 'r';
                    }
                }
            }
            return ans;
        }
    };