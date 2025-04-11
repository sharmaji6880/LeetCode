> **Problem No.:** 2843  
> **Problem Name:** Count Symmetric Integers  
> **Problem Link:** [https://leetcode.com/problems/count-symmetric-integers/](https://leetcode.com/problems/count-symmetric-integers/)  


    class Solution {
    public:
        bool isSymmetric(int n) {
            string s = to_string(n);
            if(s.size()%2) {
                return false;
            }
            int sum1 = 0, sum2 = 0;
            for(int i=0;i<s.size()/2;i++) {
                sum1 += s[i]-'0';
            }
            for(int i=s.size()/2;i<s.size();i++) {
                sum2 += s[i] - '0';
            }
            return sum1==sum2;
        }
        int countSymmetricIntegers(int low, int high) {
            int count = 0;
            for(int i=low;i<=high;i++) {
                if(isSymmetric(i)) count++;
            }
            return count;
        }
    };