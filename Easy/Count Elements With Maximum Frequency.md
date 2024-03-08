> **Problem Number:** 3005 <br>
> **Problem Name:** Count Elements With Maximum Frequency <br>
> **Link:** [https://leetcode.com/problems/count-elements-with-maximum-frequency/](https://leetcode.com/problems/count-elements-with-maximum-frequency/) <br>

    class Solution {
    public:
        int maxFrequencyElements(vector<int>& nums) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            int max = INT_MIN;
            for(auto x:m) {
                if(x.second > max) {
                    max = x.second;
                }
            }
            int ans = 0;
            for(auto x:m) {
                if(x.second == max) {
                    ans+=max;
                }
            }
            return ans;
        }
    };