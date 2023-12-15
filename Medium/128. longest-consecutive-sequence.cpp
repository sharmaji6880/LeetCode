class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(auto x:nums) {
            s.insert(x);
        }
        nums={};
        for(auto x:s) {
            nums.push_back(x);
        }
        int n=nums.size();
        if(n<=1) {
            return n;
        }
        sort(nums.begin(),nums.end());
        int ans=1;
        for(auto x:nums) {
            cout<<x<<" ";
        }
        int i=0,j=1;
        while(true) {
            if(nums[j]==nums[j-1]+1) {
                if(j-i+1 > ans) {
                    ans=j-i+1;
                }
                j++;
            }else {
                i=j;
                j++;
            }
            if(j>=n) {
                break;
            }
        }
        
        return ans;
    }
};
