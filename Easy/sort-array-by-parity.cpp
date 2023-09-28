class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even,odd;
        for(auto x:nums) {
            if(x%2) {
                odd.push_back(x);
            }
            else {
                even.push_back(x);
            }
        }
        nums={};
        for(auto x:even) {
            nums.push_back(x);
        }
        for(auto x:odd) {
            nums.push_back(x);
        }
        vector<int> arr = nums;
        return arr;
    }
};
