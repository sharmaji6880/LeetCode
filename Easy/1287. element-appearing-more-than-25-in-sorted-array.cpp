class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> m;
        for(auto x:arr) {
            m[x]++;
        }
        int count=0,ans=0;
        for(auto x:m) {
            if(x.second > count) {
                count=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};
