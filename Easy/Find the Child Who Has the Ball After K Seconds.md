> **Problem Number:** 3178 <br>
> **Problem Name:** Find the Child Who Has the Ball After K Seconds <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/](https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/) <br>

    class Solution {
    public:
        int numberOfChild(int n, int k) {
            int rem = k % (n-1);
            int quo = k / (n-1);

            if(quo % 2 == 0) {
                return rem;
            }
            return n - rem - 1;
        }
    };