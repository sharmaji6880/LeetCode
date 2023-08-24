class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> arr;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                int left=j+1;
                int right=n-1;
                while(left<right) {
                    long x=(long)nums[i]+(long)nums[j]+(long)nums[left]+(long)nums[right];
                    if(x == target) {
                        arr.insert({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                    }else if(x<target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        vector<vector<int>> ans;
        for(auto x:arr) {
            ans.push_back(x);
        }
        return ans;

    }
};
