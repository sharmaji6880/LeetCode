class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n/2;i++) {
            if( nums[i]+nums[n-1-i] > ans) {
                ans=nums[i]+nums[n-1-i];
            }
        }
        return ans;
    }
};
