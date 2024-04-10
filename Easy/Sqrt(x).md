> **Problem Number:** 69 <br>
> **Problem Name:** Sqrt(x) <br>
> **Problem Link:** [https://leetcode.com/problems/sqrtx/](https://leetcode.com/problems/sqrtx/) <br>

**Using Linear Search** <br>

    // Time Complexity: O(n)
    class Solution {
    public:
        int mySqrt(int x) {
            if(x==0 || x==1) {
                return x;
            }
            for(long i=2;i<=INT_MAX;i++) {
                if(i*i == x) {
                    return i;
                }
                else if(i*i > x) {
                    return i-1;
                }
            }
            return -1;
        }
    };

**Using Binary Search** <br>

    // Time Complexity: O(logn)
    class Solution {
    public:
        int mySqrt(int x) {
            if(x==0 || x==1) {
                return x;
            }
            long left = 2, right = INT_MAX;
            long mid;
            if(left*left == x) {
                return left;
            }
            while(left<=right) {
                mid = (left+right)/2;
                if(mid*mid == x) {
                    return mid;
                }else if(mid*mid < x) {
                    left = mid+1;
                }else {
                    if((mid-1)*(mid-1) < x) {
                        return mid-1;
                    }else {
                        right=mid-1;
                    }
                }
            }
            return -1;
        }
    };