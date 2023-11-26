//This is a brute force approach
// For larger inputs, it may result into TLE(Time Limit Exceeded)
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++) {
            int sum=0;
            for(int j=0;j<nums.size();j++) {
                if(j==i) {
                    continue;
                }
                sum+=abs(nums[i]-nums[j]);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};

//This is an optimized approach
//It solves the problem much faster than the brute force approach mentioned above
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixSum(n);
        int totalSum=0;
        for(int i=0;i<n;i++) {
            if(i==0) {
                prefixSum[i]=0;
                totalSum+=nums[i];
                continue;
            }
            prefixSum[i]=prefixSum[i-1]+nums[i-1];
            totalSum+=nums[i];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++) {
            ans[i]=nums[i]*i - prefixSum[i] + (totalSum-prefixSum[i]-nums[i]) - nums[i]*(n-1-i);
        }
        return ans;
    }
};
