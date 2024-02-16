class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b) {
        return a[1] < b[1];
    }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> m;
        for(auto x:arr) {
            m[x]++;
        }
        vector<vector<int>> nums;
        for(auto x:m) {
            nums.push_back({x.first,x.second});
        }
        sort(nums.begin(),nums.end(),cmp);
        int count = 0;
        for(auto x:nums) {
            while(x[1] && k) {
                x[1]--;
                k--;
            }
            if(x[1]==0) {
                count++;
            }
            if(k==0) {
                break;
            }
        }
        return nums.size()-count;
    }
};