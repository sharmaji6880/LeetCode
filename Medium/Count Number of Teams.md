> **Problem Number:** 1395 <br>
> **Problem Name:** Count Number of Teams <br>
> **Problem Link:** [https://leetcode.com/problems/count-number-of-teams/](https://leetcode.com/problems/count-number-of-teams/) <br>

**Brute Force Method:** <br>

    class Solution {
    public:
        bool canFormTeam(int &a,int &b,int &c) {
            if(a < b && b < c) {
                return true;
            }
            if(a > b && b > c) {
                return true;
            }
            return false;
        }

        int numTeams(vector<int>& rating) {
            int count = 0;
            int n = rating.size();
            for(int i=0;i<n-2;i++) {
                for(int j=i+1;j<n-1;j++) {
                    for(int k=j+1;k<n;k++) {
                        if(canFormTeam(rating[i],rating[j],rating[k])) {
                            count += 1;
                        }
                    }
                }
            }
            return count;
        }
    };