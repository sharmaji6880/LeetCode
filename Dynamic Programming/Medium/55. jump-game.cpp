class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int prev;
        vector<bool> dp(n,false);
        for(int i=n-1;i>=0;i--) {
            if(i==n-1) {
                dp[i]=true;
                prev=i;
                continue;
            }
            if(nums[i]>=prev-i) {
                dp[i]=true;
                prev=i;
            }else {
                dp[i]=false;
            }
        }
        return dp[0];
    }
};
