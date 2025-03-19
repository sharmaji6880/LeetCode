> **Problem No.:** 2529  
> **Problem Name:** Maximum Count of Positive Integer and Negative Integer  
> **Problem Link:** [https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/](https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/)  


    // Optimal Approach (Binary Search Based)
    // Time Complexity: O(log n)
    // n = Size of nums
    class Solution {
    public:
        int binarySearch(vector<int> &arr, bool left, bool zero) {
            int l = 0, r = arr.size()-1, mid, index = -1;
            if(zero) {
                while(l<=r) {
                    mid = (l+r)/2;
                    if(arr[mid] > 0) {
                        r = mid - 1;
                    }else if(arr[mid] < 0) {
                        l = mid + 1;
                    }else {
                        index = mid;
                        if(left) r = mid -1 ;
                        else l = mid + 1;
                    }
                }
            }else {
                while(l<=r) {
                    mid = (l+r)/2;
                    if(arr[mid] >= 0) {
                        r = mid - 1;
                    }else if(arr[mid] < 0) {
                        index = mid;
                        l = mid + 1;
                    }
                }
            }
            return index;
        }
        int maximumCount(vector<int>& nums) {
            int n = nums.size();
            int index1, index2;
            index1 = binarySearch(nums,true,true);
            if(index1 == -1) {
                index2 = binarySearch(nums,true,false);
                return max(index2 + 1, n - index2 - 1);
            }
            index2 = binarySearch(nums,false,true);
            return max(index1, n-index2-1);
        }
    };