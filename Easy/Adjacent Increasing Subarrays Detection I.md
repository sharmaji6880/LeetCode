> **Problem Number:** 3349 <br>
> **Problem Name:** Adjacent Increasing Subarrays Detection I <br>
> **Problem Link:** [https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i](https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i) <br>

    class Solution {
    public:
        bool hasIncreasingSubarrays(vector<int>& nums, int k) {
            if(k == 1) {
                return true;
            }
            int n = nums.size();
            stack<int> st;
            int prev = 0;
            for(int i=0;i<n;i++) {
                if(st.empty()) {
                    st.push(nums[i]);
                    continue;
                }
                if(nums[i] > st.top()) {
                    st.push(nums[i]);
                }else {
                    prev = st.size();
                    st = {};
                    st.push(nums[i]);
                }
                if(prev >= 2 * k || st.size() >= 2 * k) {
                    return true;
                }
                if(prev >=k && st.size() >= k) {
                    return true;
                }
            }
            return false;
        }
    };