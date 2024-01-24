class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        if(n==1) {
            return matrix[0][0];
        }
        vector<vector<int>> dp(n,vector<int>(n,0));

        for(int i=n-1;i>=0;i--) {
            for(int j=0;j<n;j++) {
                if(i==n-1) {
                    dp[i][j]=matrix[i][j];
                    continue;
                }
                if(j==0) {
                    dp[i][j]= matrix[i][j] + min(dp[i+1][j],dp[i+1][j+1]);
                }else if(j==n-1) {
                    dp[i][j]= matrix[i][j] + min(dp[i+1][j],dp[i+1][j-1]);
                }else {
                    dp[i][j] = matrix[i][j] + min( min(dp[i+1][j-1],dp[i+1][j]), dp[i+1][j+1]);
                }
            }
        }
        int Min=dp[0][0];
        for(int i=1;i<n;i++) {
            if(dp[0][i] < Min) {
                Min=dp[0][i];
            }
        }
        return Min;
    }
};
