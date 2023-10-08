class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(auto x:nums) {
            sum+=x;
        }
        int totalSum=nums.size()*(nums.size()+1)/2;
        if(totalSum-sum) {
            return totalSum-sum;
        }
        return 0;
        
    }
};
