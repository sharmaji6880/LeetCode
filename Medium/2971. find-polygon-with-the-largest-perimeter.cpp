class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<long> prefixSum(nums.size());

        for(int i=0;i<prefixSum.size();i++) {
            if(i==0) {
                prefixSum[i]=0;
                continue;
            }

            prefixSum[i]=prefixSum[i-1]+nums[i-1];
        }

        for(int i=nums.size()-1;i>=0;i--) {
            if(prefixSum[i] > nums[i]) {
                return prefixSum[i]+nums[i];
            }
        }

        return -1;
    }
};
