class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        map<int,int> m;
        for(auto x:nums) {
            m[x]++;
        }
        int count=nums.size()/3;
        for(auto x:m) {
            if(x.second>count) {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
