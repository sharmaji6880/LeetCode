> **Problem Number:** 1652 <br>
> **Problem Name:** Defuse the Bomb <br>
> **Problem Link:** [https://leetcode.com/problems/defuse-the-bomb](https://leetcode.com/problems/defuse-the-bomb) <br>

**Brute Force Solution:** <br>

    class Solution {
    public:
        int getEle(vector<int> &code, int i, int n) {
            if( i >= 0 && i < n ) {
                return code[i];
            }
            if( i >= n ) {
                return code[i%n];
            }
            if( i < 0 ) {
                return code[n+i];
            }
            return -1;
        }
        vector<int> decrypt(vector<int>& code, int k) {
            if( k == 0 ) {
                return vector<int>(code.size(),0);
            }
            int n = code.size();
            vector<int> copy(code);
            int sum;

            if( k > 0 ) {
                for(int i=0;i<n;i++) {
                    sum = 0;
                    for(int j=1;j<=k;j++) {
                        sum += getEle(copy,i+j,n);
                    }
                    code[i] = sum;
                }
            }else if( k < 0 ) {
                for(int i=0;i<n;i++) {
                    sum = 0;
                    for(int j=-1;j>=k;j--) {
                        sum += getEle(copy,i+j,n);
                    }
                    code[i] = sum;
                }
            }
            
            return code;
        }
    };