class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0,right=0;
        int Max=0;
        if(nums.size()==1) {
            if(nums[0]==1) {
                return 1;
            }
            return 0;
        } 
        while(true) {
            if(nums[right]==1) {
                right++;
            }else {
                if(right-left > Max) {
                    Max=right-left;
                }
                left=right+1;
                right++;
            }
            if(right==nums.size()) {
                if(right-left > Max) {
                    Max=right-left;
                }
                break;
            }
        }
        return Max;
    }
};
