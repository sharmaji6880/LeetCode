// For larger inputs, this solution may result into MLE(Memory Limit Exceeded)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        long ans=LONG_MIN;
        for(int i=0;i<n;i++) {
            dp[i][i]=nums[i];
            if(dp[i][i] > ans) {
                ans=dp[i][i];
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                dp[i][j]=dp[i][j-1]+nums[j];
                if(dp[i][j] > ans) {
                    ans=dp[i][j];
                }
            }
        }
        return ans;
    }
};
