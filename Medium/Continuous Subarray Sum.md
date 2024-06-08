> **Problem Number:** 523 <br>
> **Problem Name:** Continuous Subarray Sum <br>
> **Problem Link:** [https://leetcode.com/problems/continuous-subarray-sum/](https://leetcode.com/problems/continuous-subarray-sum/) <br>

    class Solution {
    public:
        bool checkSubarraySum(vector<int>& nums, int k) {
            int n = nums.size();
            
            vector<int> pSum(n,0);
            for(int i=0;i<n;i++) {
                if(i==0) {
                    pSum[i] = nums[i];
                    continue;
                }
                pSum[i] = pSum[i-1] + nums[i];
            }
            for(auto x:pSum) {
                cout<<x<<" ";
            }
            map<int,pair<int,int>> m;
            m[0] = {1,-1};
            for(int i=0;i<n;i++) {
                int rem = pSum[i]%k;
                if(m.count(rem)) {
                    if(i - m[rem].second >= 2) {
                        return true;
                    }else {
                        m[rem].first++;
                    }
                }else {
                    m[rem] = {1,i};
                }
            }
            return false;
        }
    };