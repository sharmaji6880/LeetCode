> **Problem Number:** 2779 <br>
> **Problem Name:** Maximum Beauty of an Array After Applying Operation <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation](https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation) <br>

**Sliding Window Approach:** <br>

    class Solution {
    public:
        int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size(), l = 0, r = 0, maxBeauty = INT_MIN;
        while( l <= r && r < n ) {
            if(nums[r] - nums[l] <= 2 * k ) {
                if( r == n - 1 ) {
                    if( r - l + 1 > maxBeauty ) {
                        maxBeauty = r - l + 1;
                    }
                    break;
                }
                r++;
            } else {
                if( r - l > maxBeauty ) {
                    maxBeauty = r - l;
                }
                l++;
            }
        } 
        return maxBeauty;
        }
    };

**Binary Search Approach:** <br>

    class Solution {
    public:
        int binarySearch(vector<int> &arr, int l, int r, int num, int k ) {
            int index,m;
            while( l <= r ) {
                m = (l+r)/2;
                if( arr[m] - num > 2 * k ) {
                    r = m - 1;
                }else if( arr[m] - num <= 2 * k ) {
                    index = m;
                    l = m + 1;
                }
            }
            return index;
        }
        int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size(), maxBeauty = 1, index;
        for(int i=0;i<n-1;i++) {
            index = binarySearch(nums,i+1,n-1,nums[i],k);
            if( index - i + 1 > maxBeauty ) {
                maxBeauty = index - i + 1;
            }
        }
        return maxBeauty;
        }
    };





