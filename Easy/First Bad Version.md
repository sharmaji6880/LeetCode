> **Problem Number:** 278 <br>
> **Problem Name:** First Bad Version <br>
> **Problem Link:** [https://leetcode.com/problems/first-bad-version/](https://leetcode.com/problems/first-bad-version/) <br>

    class Solution {
    public:
        int firstBadVersion(int n) {
            int left = 1, right = n;
            long mid;
            while(left <= right) {
                mid = ( (long) left + right ) /2;
                if(!isBadVersion(mid)) {
                    left = mid+1;
                    continue;
                }
                if(!isBadVersion(mid-1)) {
                    return mid;
                }
                right=mid-1;
            }
            return -1;
        }
    };