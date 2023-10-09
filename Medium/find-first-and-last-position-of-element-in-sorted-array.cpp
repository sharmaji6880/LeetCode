class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<(int)nums.size();i++) {
            if(nums[i]==target) {
                ans.push_back(i);
            }
        }
        if(ans.size()) {
            return {ans[0],ans[ans.size()-1]};
        }
        return {-1,-1};
    }
};
