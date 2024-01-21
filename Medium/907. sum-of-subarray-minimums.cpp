// Solution 1
// This is a Dynamic Programming based approach
// This approach may result into MLE(Memory Limit Exceeded)
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(i==j) {
                    dp[i][j]=arr[i];
                    continue;
                }
                dp[i][j]=min(dp[i][j-1],arr[j]);
            }
        }

        long ans=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                ans = (ans+dp[i][j]) % (1000000007);
            }
        }
        return ans;
    }
};
