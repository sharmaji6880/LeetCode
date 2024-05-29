> **Problem Number:** 1404 <br>
> **Problem Name:** Number of Steps to Reduce a Number in Binary Representation to One <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/) <br>

    class Solution {
    public:
        int numSteps(string s) {
            if(s.size() == 1) {
                return 0;
            }
            int zeros = 0;
            int ones = 0;
            for(auto x:s) {
                if(x=='1') {
                    ones+=1;
                }else {
                    zeros+=1;
                }
            }
            int n = s.size();
            if(ones == n) {
                return n+1;
            }
            int count = 0;
            while(true) {
                if(s[n-1] == '0') {
                    for(int i=n-1;i>=0;i--) {
                        if(i==0) {
                            s[i]='0';
                            continue;
                        }
                        s[i] = s[i-1];
                    }
                }else {
                    int j=n-1;
                    while(j>=0 && s[j]=='1') {
                        s[j]='0';
                        ones--;
                        zeros++;
                        j--;
                    }
                    if(j>=0) {
                        s[j]='1';
                        ones++;
                        zeros--;
                    }
                }
                count+=1;
                if(ones == 1 && s[n-1]=='1') {
                    break;
                }
            }
            return count;
        }
    };