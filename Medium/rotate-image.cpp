class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> rotated(n);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;++j) {
                rotated[i].push_back(0);
            }
        }
        for(int j=0;j<n;j++) {
            for (int i=n-1;i>=0;--i) {
                rotated[j][n-1-i]=matrix[i][j];
            }
        }
        matrix=rotated;
    }
};
