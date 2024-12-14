> **Problem Number:** 33 <br>
> **Problem Name:** Search in Rotated Sorted Array <br>
> **Problem Link:** [https://leetcode.com/problems/search-in-rotated-sorted-array](https://leetcode.com/problems/search-in-rotated-sorted-array)


    class Solution {
    public:
        
        int search(vector<int>& nums, int target) {
            int l = 0, r = nums.size() - 1, mid;

            while( l <= r ) {
                mid = (l+r) / 2;
                if( nums[mid] == target ) {
                    return mid;
                }
                if(nums[mid] >= nums[0]) {
                    if( nums[mid] < target || target < nums[0] ) {
                        l = mid + 1;
                    }else if( nums[mid] > target && target >= nums[0] ) {
                        r = mid - 1;
                    }
                }
                else {
                    if(nums[mid] > target || target >= nums[0]) {
                        r = mid - 1;
                    }else if( nums[mid] < target && target < nums[0] ) {
                        l = mid + 1;
                    }
                }
            }
            return -1;
        }
    };