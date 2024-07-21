> **Problem Number:** 1037 <br>
> **Problem Name:** Valid Boomerang <br>
> **Problem Link:** [https://leetcode.com/problems/valid-boomerang/](https://leetcode.com/problems/valid-boomerang/) <br>

    class Solution {
    public:
        float slope(vector<int> &point1, vector<int> &point2) {
            float m;
            m = 1.0 * (point2[1]-point1[1]) / (point2[0]-point1[0]);
            return m;
        }
        bool isBoomerang(vector<vector<int>>& points) {
            if(points[0] == points[1] || points[1] == points[2] || points[2] == points[0]) {
                return false;
            }
            if(points[1][0] - points[0][0] == points[2][0] - points[1][0] && points[1][0]-points[0][0] == 0) {
                return false;
            }
            if(slope(points[0],points[1]) == slope(points[1],points[2])) {
                return false;
            }
            return true;
        }
    };