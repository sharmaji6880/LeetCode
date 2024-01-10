class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums) {
            m[x]++;
        }
        set<int> s;
        for(auto x:nums) {
            s.insert(x);
        }
        nums={};
        for(auto x:s) {
            for(int i=0;i<m[x];i++) {
                nums.push_back(x);
            }
        }
        return nums;
    }
};
