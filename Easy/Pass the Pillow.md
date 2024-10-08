> **Problem Number:** 2582 <br>
> **Problem Name:** Pass the Pillow <br>
> **Problem Link:** [https://leetcode.com/problems/pass-the-pillow/description/](https://leetcode.com/problems/pass-the-pillow/) <br>

    class Solution {
    public:
        int passThePillow(int n, int time) {
            int num = time / (n-1);
            int rem = time % (n-1);
            if( num % 2 ) {
                return n - rem;
            }
            return rem + 1;
        }
    };