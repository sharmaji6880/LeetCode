class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) {
            return true;
        }
        bool cfi=false,cfd=false;
        for(int i=0;i<n-1;i++) {
            if(nums[i+1]==nums[i]) {
                continue;
            }
            if(cfi==false && cfd==false) {
                if(nums[i+1] > nums[i]) {
                    cfi=true;
                    continue;
                }
                if(nums[i+1] < nums[i]) {
                    cfd=true;
                    continue;
                }
            }
            if(cfi==true) {
                if(nums[i+1] > nums[i]) {
                    continue;
                }else {
                    return false;
                }
            }
            if(cfd==true) {
                if(nums[i+1] < nums[i]) {
                    continue;
                }else {
                    return false;
                }
            }
        }
        return true;
    }
};
