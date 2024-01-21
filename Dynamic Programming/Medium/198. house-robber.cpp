class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        vector<int> dp(n+1,0);

        for(int i=n-1;i>=0;i--) {
            if(i==n-1) {
                dp[i]=nums[i];
                continue;
            }
            dp[i]=max(nums[i]+dp[i+2], dp[i+1]);
        }
        return dp[0];
    }
};
