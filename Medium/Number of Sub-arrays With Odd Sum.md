> **Problem Number:** 1524 <br>
> **Problem Name:** Number of Sub-arrays With Odd Sum <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum](https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum) <br>

    class Solution {
    public:
        int numOfSubarrays(vector<int>& arr) {
            int n = arr.size(), modulo = 1000000007;
            long long ans = 0;
            multiset<int> odds,evens;
            vector<int> pSum(n,0);
            for(int i=0;i<n;i++) {
                if(i==0) {
                    pSum[i] = arr[i];
                    continue;
                }
                pSum[i] = pSum[i-1] + arr[i];
            }
            for(int i=0;i<n;i++) {
                if(pSum[i]%2) {
                    ans += evens.size() + 1;
                    odds.insert(pSum[i]);
                }else {
                    ans += odds.size();
                    evens.insert(pSum[i]);
                }
                ans %= modulo;
            }
            return ans;
        }
    };