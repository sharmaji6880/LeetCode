> **Problem Number:** 2762 <br>
> **Problem Name:** Continuous Subarrays <br>
> **Problem Link:** [https://leetcode.com/problems/continuous-subarrays](https://leetcode.com/problems/continuous-subarrays) <br>

    class Solution {
    public:
        long long continuousSubarrays(vector<int>& nums) {
            long long score = 0, l = 0, r = 0, diff, n = nums.size();
            map<int,int> m;

            while( true ) {
                m[nums[r]]++;
                diff = (--m.end())->first - m.begin()->first;
                
                if( diff <= 2 ) {
                    score += 1;
                    if( r == n - 1 ) {
                        score += (r-l) * (r-l+1) / 2;
                        break;
                    } else {
                        r++;
                    }
                }else {
                    if( m[nums[l]] == 1) {
                        m.erase(nums[l]);
                    }else {
                        m[nums[l]]--;
                    }
                    if( m[nums[r]] == r ) {
                        m.erase(nums[r]);
                    }else {
                        m[nums[r]]--;
                    }
                    l++;
                    r--;
                    score += r - l + 1;
                    r++;
                }
            }

            return score;
        }
    };