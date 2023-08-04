class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums) {
            m[x]++;
        }
        vector<int> ans;
        for(auto x:m) {
            if(x.second==2) {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
