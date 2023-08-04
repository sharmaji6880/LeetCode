class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        if(nums.size()==1) {
            return nums[0];
        }
        while(left<=right) {
            int mid=(left+right)/2;
            if(mid==0) {
                return nums[0];
            }
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) {
                return nums[mid];
            }
            if(nums[mid]==nums[mid-1]) {
                if(mid%2) {
                    left=mid+1;
                }
                else {
                    right=mid-1;
                }
            }
            else {
                if(mid%2) {
                    right=mid-1;
                }
                else {
                    left=mid+1;
                }
            }
        }
        return 0;
    }
};
