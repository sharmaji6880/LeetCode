> **Problem Number:** 1637 <br>
> **Problem Name:** Widest Vertical Area Between Two Points Containing No Points <br>
> **Link:** [https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/](https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/) <br>

    class Solution {
    public:
        int maxWidthOfVerticalArea(vector<vector<int>>& points) {
            sort(points.begin(),points.end());
            int Max = INT_MIN;
            for(int i=0;i<points.size()-1;i++) {
                if(points[i+1][0]-points[i][0] > Max) {
                    Max = points[i+1][0] - points[i][0];
                }
            }
            return Max;
        }
    };