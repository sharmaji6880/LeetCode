> **Problem Number:** 231 <br>
> **Problem Name:** Power of Two <br>
> **Link:** [https://leetcode.com/problems/power-of-two/](https://leetcode.com/problems/power-of-two/) <br>

**Using Repeated Division** <br>
    class Solution {
    public:
        bool isPowerOfTwo(int n) {
            double f=n;
            while(f>1) {
                f=f/2;
                cout<<f<<endl;
            }
            if(f==1) {
                return true;
            }
            return false;
        }
    };
