class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        if(nums[0]==x) {
            return 1;
        }
        int Max=-1;
        int i=0,j=0;
        int totalSum=0;
        for(auto x:nums) {
            totalSum+=x;
        }
        if(totalSum<x) {
            return -1;
        }
        int required=totalSum-x;
        int sum=nums[i];
        while(true) {
            if(sum<required) {
                j++;
                if(j>=nums.size()) {
                    break;
                }
                sum+=nums[j];
                continue;
            }else if(sum==required) {
                if(j-i+1 > Max) {
                    Max=j-i+1;
                }
                if(j==nums.size()-1) {
                    break;
                }
                i++;
                sum-=nums[i-1];
            }else {
                if(j>=nums.size()) {
                    break;
                }
                i++;
                sum-=nums[i-1];
            }
        }
        if(Max==-1) {
            return Max;
        }
        return nums.size()-Max;
        
    }
};
