> **Problem Number:** 713 <br>
> **Problem Name:** Subarray Product Less Than K <br>
> **Problem Link:** [https://leetcode.com/problems/subarray-product-less-than-k](https://leetcode.com/problems/subarray-product-less-than-k) <br>

**Brute Force Approach:** <br>

    class Solution {
    public:
        int numSubarrayProductLessThanK(vector<int>& nums, int k) {
            int count = 0, n = nums.size(), product;
            
            for(int i=0;i<n;i++) {
                product = 1;
                for(int j=i;j<n;j++) {
                    product *= nums[j];
                    if( product < k ) {
                        count += 1;
                    }else {
                        break;
                    }
                }
            }
            return count;
        }
    };