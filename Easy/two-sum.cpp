class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j && nums[i]+nums[j]==target){
                    indices.push_back(i);
                    indices.push_back(j);
                    flag=1;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        return indices;
    }
};
