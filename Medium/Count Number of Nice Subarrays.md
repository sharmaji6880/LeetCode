> **Problem Number:** 1248 <br>
> **Problem Name:** Count Number of Nice Subarrays <br>
> **Problem Link:** [https://leetcode.com/problems/count-number-of-nice-subarrays/](https://leetcode.com/problems/count-number-of-nice-subarrays/) <br>

    class Solution {
    public:
        int numberOfSubarrays(vector<int>& nums, int k) {
            auto n = nums.size();

            for( auto &x:nums ) {
                if( x % 2 ) {
                    x = 1;
                }else {
                    x = 0;
                }
            }
            vector<int> pSum(n,0);
            for(int i=0;i<n;i++) {
                if(i == 0) {
                    pSum[i] = nums[i];
                    continue;
                }
                pSum[i] = pSum[i-1] + nums[i];
            }
            
            int ans = 0;
            map<int,int> m;
            m[0] = 1;

            for(int i = 0;i<n;i++) {
                if( m.find(pSum[i] - k) != m.end() ) {
                    ans += m[ pSum[i] - k ];
                }
                m[ pSum[i] ] += 1;
            }
            return ans;
        }
    };