> **Problem Number:** 3147 <br>
> **Problem Name:** Taking Maximum Energy From the Mystic Dungeon <br>
> **Problem Link:** [https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/](https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/) <br>

    class Solution {
    public:
        int maximumEnergy(vector<int>& energy, int k) {
            int n = energy.size();
            vector<int> dp(n,0);
            dp[n-1] = energy[n-1];
            for(int i=n-2;i>=0;i--) {
                if(i+k >= n) {
                    dp[i] = energy[i];
                    continue;
                }
                dp[i] = dp[i+k] + energy[i];
            }
            int maxEnergy = INT_MIN;
            for(auto x:dp) {
                if(x > maxEnergy) {
                    maxEnergy = x;
                }
            }
            return maxEnergy;
        }
    };