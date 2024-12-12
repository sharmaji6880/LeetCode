> **Problem Number:** 2558 <br>
> **Problem Name:** Take Gifts From the Richest Pile <br>
> **Problem Link:** [https://leetcode.com/problems/take-gifts-from-the-richest-pile](https://leetcode.com/problems/take-gifts-from-the-richest-pile) <br>

    class Solution {
    public:
        long long pickGifts(vector<int>& gifts, int k) {
            long long ans = 0, n = gifts.size(), totalSum = 0;
            int max,index;
            for(auto x:gifts) {
                totalSum += x;
            }
            
            for(int i=1;i<=k;i++) {
                max = INT_MIN;
                for(int j=0;j<n;j++) {
                    if( gifts[j] > max ) {
                        max = gifts[j];
                        index = j;
                    }
                }
                totalSum -= gifts[index];
                gifts[index] = floor(sqrt(1.0 * gifts[index]));
                ans += gifts[index];
            }
            return ans + totalSum;
            
        }
    };