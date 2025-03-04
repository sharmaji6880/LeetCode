> **Problem Number:** 1780 <br>
> **Problem Name:** Check if Number is a Sum of Powers of Three <br>
> **Problem Link:**[https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three](https://leetcode.com/problems/check-if-number-is-a-sum-of-powers-of-three) <br>

    class Solution {
    public:
        string decimalToTernary(int n) {
            string s = "";
            while(n) {
                s += (char) (n%3+48);
                n/=3;
            }
            int l=0,r=s.size()-1;
            while(l<r) {
                s[l] = s[l]+s[r];
                s[r] = s[l]-s[r];
                s[l] = s[l] - s[r];
                l++;r--;
            }
            return s;
        }
        bool checkPowersOfThree(int n) {
            string s = decimalToTernary(n);
            for(auto x:s) {
                if(x=='2') return false;
            }
            return true;
        }
    };