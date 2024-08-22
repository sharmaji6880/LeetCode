> **Problem Number:** 476 <br>
> **Problem Name:** Number Complement <br>
> **Problem Link:** [https://leetcode.com/problems/number-complement/description/](https://leetcode.com/problems/number-complement/description/) <br>


    class Solution {
    public:
        int findComplement(int num) {
            string str="";
            while(num) {
                num%2?str+='1':str+='0';
                num/=2;
            }
            int n=str.size();
            for(int i=0;i<n/2;i++) {
                char temp=str[i];
                str[i]=str[n-1-i];
                str[n-1-i]=temp;
            }
            for(auto &x:str) {
                if(x=='0') {
                    x='1';
                }
                else {
                    x='0';
                }
            }
            int ans=0;
            for(int i=n-1;i>=0;--i) {
                if(str[i]=='0') {
                    continue;
                }
                ans+=pow(2,n-i-1);
            }
            return ans;
        }
    };
