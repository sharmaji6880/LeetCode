class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<=n-3;i+=3) {
            vector<int> arr;
            if(abs(nums[i]-nums[i+2]) > k) {
                return {};
            }
            arr.push_back(nums[i]);
            arr.push_back(nums[i+1]);
            arr.push_back(nums[i+2]);
            ans.push_back(arr);
        }
        return ans;
    }
};
