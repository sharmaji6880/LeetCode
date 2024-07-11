> **Problem Number:** 2078 <br>
> **Problem Name:** Two Furthest Houses With Different Colors <br>
> **Problem Link:** [https://leetcode.com/problems/two-furthest-houses-with-different-colors/](https://leetcode.com/problems/two-furthest-houses-with-different-colors/) <br>

    class Solution {
    public:
        int maxDistance(vector<int>& colors) {
            int maxDis = INT_MIN;
            int n = colors.size();
            for(int i = 0;i<n-1;i++) {
                for(int j = i+1;j<n;j++) {
                    if(colors[i] == colors[j]) {
                        continue;
                    }
                    if(abs(i-j) > maxDis) {
                        maxDis = abs(i-j);
                    }
                }
                
            }
            return maxDis;
        }
    };