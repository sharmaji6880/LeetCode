> **Problem Number:** 238 <br>
> **Problem Name:** Product of Array Except Self <br>
> **Link:** [https://leetcode.com/problems/product-of-array-except-self/](https://leetcode.com/problems/product-of-array-except-self/) <br>

**Using PrefixProduct & SuffixProduct**

    class Solution {
    public:
        vector<int> productExceptSelf(vector<int>& nums) {
            int n = nums.size();
            vector<int> pre(n);
            vector<int> suff(n);

            for(int i=0;i<n;i++) {
                if(i==0) {
                    pre[i]=nums[i];
                    continue;
                }
                pre[i]=pre[i-1]*nums[i];
            }
            for(int i=n-1;i>=0;i--) {
                if(i==n-1) {
                    suff[i]=nums[i];
                    continue;
                }
                suff[i]=nums[i]*suff[i+1];
            }
            vector<int> ans(n);
            for(int i=0;i<n;i++) {
                if(i==0) {
                    ans[i]=suff[i+1];
                }else if(i==n-1) {
                    ans[i]=pre[i-1];
                }else {
                    ans[i]=pre[i-1]*suff[i+1];
                }
            }
            return ans;

        }
    };