> **Problem Number:** 374 <br>
> **Problem Name:** Guess Number Higher or Lower <br>
> **Problem Link:** [https://leetcode.com/problems/guess-number-higher-or-lower/](https://leetcode.com/problems/guess-number-higher-or-lower/) <br>

    class Solution {
    public:
        int guessNumber(int n) {
            long left = 1, right = n;
            if(guess(left) == 0) {
                return left;
            }
            if(guess(right) == 0) {
                return right;
            }
            long mid;
            while(left <= right) {
                mid = (left+right)/2;
                if(guess(mid) == 0) {
                    return mid;
                }else if(guess(mid) == 1) {
                    left = mid+1;
                }else {
                    right = mid-1;
                }
            }
            return -1;
        }
    };