> **Problem Number:** 1952 <br>
> **Problem Name:** Three Divisors <br>
> **Problem Link:** [https://leetcode.com/problems/three-divisors/](https://leetcode.com/problems/three-divisors/) <br>

    class Solution {
    public:
        bool isThree(int n) {
            int count = 0;
            for(int i=1;i<=n/2;i++) {
                if(n%i == 0) {
                    count += 1;
                }
                if(count == 3) {
                    return false;
                }
            }
            if(count == 2) {
                return true;
            }
            return false;
        }
    };