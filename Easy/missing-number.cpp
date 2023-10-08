class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> mymap;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            mymap[nums[i]]++;
        }
        int ans;
        for(int i=0;i<=n;i++) {
            if(!(mymap.count(i))) {
                ans=i;
                break;
            }
        }
        return ans;
    }
};
