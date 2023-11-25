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
