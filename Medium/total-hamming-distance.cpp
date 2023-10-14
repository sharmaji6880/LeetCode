class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size()-1;i++) {
            int x=nums[i];
            for(int j=i+1;j<nums.size();j++) {
                sum+=bitset<32>(x^nums[j]).count();
            }
        }
        return sum;
    }
};
