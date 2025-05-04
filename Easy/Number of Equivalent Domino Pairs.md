> **Problem No.:** 1128  
> **Problem Name:** Number of Equivalent Domino Pairs  
> **Problem Link:** [https://leetcode.com/problems/number-of-equivalent-domino-pairs](https://leetcode.com/problems/number-of-equivalent-domino-pairs)  


    class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int n = dominoes.size(), cnt = 0;
            int a,b,c,d;
            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    a = dominoes[i][0];
                    b = dominoes[i][1];
                    c = dominoes[j][0];
                    d = dominoes[j][1];
                    if( (a==c && b==d) || (a==d && b==c) ) cnt++;
                }
            }
            return cnt;
        }
    };