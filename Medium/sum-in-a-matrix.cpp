class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int score=0; 
        for(auto &x:nums) {
            sort(x.begin(),x.end());
        }
        int m=nums.size();
        int n=nums[0].size();

        for(int j=n-1;j>=0;j--) {
            int Max=-1;
            for(int i=0;i<m;i++) {
                if(nums[i][j] > Max) {
                    Max=nums[i][j];
                }
            }
            score+=Max;
        }
        return score;
    }
};
