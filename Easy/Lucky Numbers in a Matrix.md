> **Problem Number:** 1380 <br>
> **Problem Name:** Lucky Numbers in a Matrix <br>
> **Problem Link:** [https://leetcode.com/problems/lucky-numbers-in-a-matrix/](https://leetcode.com/problems/lucky-numbers-in-a-matrix/) <br>

    class Solution {
    public:
        vector<int> luckyNumbers (vector<vector<int>>& matrix) {
            int m = matrix.size();
            int n = matrix[0].size();
            vector<int> luckyNumbers;

            int minEle,maxEle;

            vector<int> rowMins(m,0);
            vector<int> colMaxs(n,0);

            for(int i=0;i<m;i++) {
                minEle = INT_MAX;
                for(int j=0;j<n;j++) {
                    if(matrix[i][j] < minEle) {
                        minEle = matrix[i][j];
                    }
                }
                rowMins[i] = minEle;
            }
            for(int i=0;i<n;i++) {
                maxEle = INT_MIN;
                for(int j=0;j<m;j++) {
                    if(matrix[j][i] > maxEle) {
                        maxEle = matrix[j][i];
                    }
                }
                colMaxs[i] = maxEle;
            }
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(rowMins[i] == matrix[i][j] && colMaxs[j] == matrix[i][j]) {
                        luckyNumbers.push_back(matrix[i][j]);
                    }
                }
            }
            return luckyNumbers;

        }

    };