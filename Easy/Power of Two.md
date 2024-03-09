> **Problem Number:** 231 <br>
> **Problem Name:** Power of Two <br>
> **Link:** [https://leetcode.com/problems/power-of-two/](https://leetcode.com/problems/power-of-two/) <br>

**Using Repeated Division** 

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

**Using Bitset**

    class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if(n<0) {
                return false;
            }
            bitset<32> b(n);
            if(b.count()==1) {
                return true;
            }
            return false;
        }
    };
