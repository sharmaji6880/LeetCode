class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        set<int> s;
        for(auto x:nums) {
            s.insert(x);
        }
        int k=s.size();
        int ans=0;
        for(int i=0;i<n;i++) {
            s={};
            for(int j=i;j<n;j++) {
                s.insert(nums[j]);
                if(s.size()==k) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
