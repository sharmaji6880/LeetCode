//This is an inefficient approach
//For larger input size, it may result into MLE(Memory Limit Exceeded)

class Solution {
public:
    int countRangeSum(vector<int>& nums, int lower, int upper) {
        int n=nums.size();
        vector<vector<long>> dp(n,vector<long>(n,0));
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(i==j) {
                    dp[i][j]=nums[i];
                    continue;
                }
                dp[i][j]=dp[i][j-1]+nums[j];
            } 
        }
        int ans=0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(dp[i][j]>=lower && dp[i][j]<=upper) {
                    ans++;
                }
            }
        }


        return ans;
    }
};
