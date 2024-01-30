// This is a brute force approach.
// For larger inputs, it results into TLE.
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int num=0;
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                if(nums[i]/(2.0) > nums[j]) {
                    num++;
                }
            }
        }
        return num;
    }
};
