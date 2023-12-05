class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1); 
        for(int i=n-1;i>=0;i--) {
            if(i==n-1) {
                dp[i]=0;
                continue;
            }
            int Min=INT_MAX;
            for(int j=i+1;j<= min(i+nums[i],n-1);j++) {
                if(dp[j]<Min && dp[j]!=-1) {
                    Min=dp[j];
                }
            }
            dp[i] = (Min == INT_MAX) ? INT_MAX : 1 + Min;
           
        }
        return dp[0];
    }
};
