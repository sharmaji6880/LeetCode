> **Problem Number:** 3075 <br>
> **Problem Name:** Maximize Happiness of Selected Children <br>
> **Link:** [https://leetcode.com/problems/maximize-happiness-of-selected-children/](https://leetcode.com/problems/maximize-happiness-of-selected-children/) <br>

    class Solution {
    public:
        long long maximumHappinessSum(vector<int>& happiness, int k) {
            long long ans = 0;
            int index = 0;
            sort(happiness.begin(),happiness.end());
            reverse(happiness.begin(),happiness.end());
            while(k--) {
                if(happiness[index]-index>0) {
                    ans += happiness[index]-index;
                }
                index++;
            }
            return ans;
        }
    };