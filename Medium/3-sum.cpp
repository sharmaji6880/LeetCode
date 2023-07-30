// Although, this is not the most efficient solution, but it works just fine.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        map<int,int> m;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++) {
            int required=-nums[i];
            if(!required) {
                continue;
            }
            if(m.count(nums[i])) {
                continue;
            }
            int j=i+1,k=n-1;
            int count=0;
            while(j<k) {
                if((nums[j]+nums[k])<required) {
                    ++j;
                }
                else if((nums[j]+nums[k])>required) {
                    --k;
                }
                else {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    count++;
                    ++j;
                }
            }
            if(!count) {
                m[nums[i]]++;
            }
        }
        int count=0;
        for(auto x:nums) {
            if(!x) {
                count++;
            }
        }
        if(count>=3) {
            ans.push_back({0,0,0});
        }
        map<vector<int>,int> s;
        for(auto x:ans) {
            s[x]++;
        }
        ans={};
        for(auto x:s) {
            ans.push_back(x.first);
        }
        return ans;
    }
};
