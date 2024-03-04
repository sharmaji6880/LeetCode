class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(auto x:nums) {
            ans.push_back(x*x);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};


// This is a better solution than the above solution
// Time Complexity: O(n)
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int index = -1;
        for(int i=0;i<n;i++) {
            if(nums[i] >= 0) {
                index = i;
                break;
            }
        }
        if(index == -1) {
            for(int i=n-1;i>=0;i--) {
                ans.push_back(pow(nums[i],2));
            }
        }else {
            int left = index-1;
            int right = index;

            while(left>=0 && right<=n-1) {
                if(pow(nums[right],2) >= pow(nums[left],2)) {
                    ans.push_back(pow(nums[left],2));
                    left--;
                }else {
                    ans.push_back(pow(nums[right],2));
                    right++;
                }
            }
            if(left<0) {
                for(int i=right;i<n;i++) {
                    ans.push_back(pow(nums[i],2));
                }
            }else {
                for(int i=left;i>=0;i--) {
                    ans.push_back(pow(nums[i],2));
                }
            }
        }
        return ans;
    }
};