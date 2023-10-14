class Solution {
public:
    int hamming(int n) {
        int count=0;
        while(n) {
            if(n%2) {
                count++;
            }
            n/=2;
        }
        return count;
    }
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                sum+=hamming(nums[i]^nums[j]);
            }
        }
        return sum;
    }
};
