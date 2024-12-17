> **Problem Number:** 4 <br>
> **Problem Name:** Median of Two Sorted Arrays <br>
> **Problem Link:** [https://leetcode.com/problems/median-of-two-sorted-arrays](https://leetcode.com/problems/median-of-two-sorted-arrays) <br>


**Brute Force Solution:** <br>

    // Time Complexity: O(m+n)
    class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> merged;
            int i=0, j=0, m=nums1.size(), n=nums2.size();
            while( i<m && j<n ) {
                if(nums1[i] < nums2[j]) merged.push_back(nums1[i++]);
                else merged.push_back(nums2[j++]);
            }
            while(i<m) {
                merged.push_back(nums1[i++]);
            }
            while(j<n) {
                merged.push_back(nums2[j++]);
            }
            int len=merged.size();
            if(len%2==0) {
                return 1.0*(merged[len/2]+merged[len/2-1])/2;
            }
            return 1.0*merged[len/2];
        }
    };

**Optimal Solution:** <br>
    
    // Time Complexity: O(log(m+n))
    class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            if( nums1.size() > nums2.size() ) {
                return findMedianSortedArrays(nums2,nums1);
            }
            int n1 = nums1.size(), n2 = nums2.size(), n = (n1+n2)/2;
            int l = 0, r = n, mid;
            int l1,l2,r1,r2;
            while( l <= r ) {
                mid = (l+r)/2;
                if( mid > n1 ) {
                    r = mid - 1;
                    continue;
                }
                l1 = mid == 0 ? INT_MIN:nums1[mid-1];
                l2 = mid == n ? INT_MIN:nums2[n-mid-1];
                r1 = mid == n1 ? INT_MAX:nums1[mid];
                r2 = (n - mid == n2) ? INT_MAX:nums2[n-mid];
                if( l2 > r1 ) {
                    l = mid + 1;
                }else if( l1 > r2 ) {
                    r = mid - 1;
                }else {
                    break;
                }
            }
            if( (n1+n2) % 2 == 0 ) {
                return 1.0 * (max(l1,l2) + min(r1,r2)) / 2;
            }
            return 1.0 * min(r1,r2);
        }
    };
