> **Problem Number:** 1925 <br>
> **Problem Name:** Count Square Sum Triples <br>
> **Problem Link:** [https://leetcode.com/problems/count-square-sum-triples](https://leetcode.com/problems/count-square-sum-triples) <br>

    class Solution {
    public:
        int countTriples(int n) {
            int count = 0;
            for(int i=1;i<=n;i++) {
                for(int j=1;j<=n;j++) {
                    for(int k=1;k<=n;k++) {
                        if( i*i + j*j == k*k ) {
                            count += 1;
                        }
                    }
                }
            }
            return count;
        }
    };