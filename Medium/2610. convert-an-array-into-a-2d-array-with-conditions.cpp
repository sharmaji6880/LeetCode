class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums) {
            m[x]++;
        }

        int Max=0;
        for(auto x:m) {
            if(x.second > Max) {
                Max=x.second;
            }
        }

        vector<vector<int>> ans(Max);
        for(auto x:m) {
            for(int i=0;i<x.second;i++) {
                ans[i].push_back(x.first);
            }
        }
        return ans;
    }
};
