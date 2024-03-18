> **Problem Number:** 452 <br>
> **Problem Name:** Minimum Number of Arrows to Burst Balloons <br>
> **Link:** [https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) <br>

    class Solution {
    public:
        static bool cmp(vector<int> a,vector<int> b) {
            return a[0] < b[0];
        }
        int findMinArrowShots(vector<vector<int>>& points) {
            int n = points.size(); // size of points i.e., the number of balloons
            if(n==1) {
                return 1; // If there is only one balloon , only one arrow will be required
            }
            sort(points.begin(),points.end(),cmp); // Sort the balloons in ascending order of the start point of the diameter

            int ans = 0;
            
            pair<int,int> intersection = {-1,-1};
            for(int i=0;i<n;i++) {
                if(i==0) {
                    intersection = {points[i][0],points[i][1]};
                    continue;
                }
                if(points[i][0] >= intersection.first && points[i][0] <= intersection.second) {
                    intersection.first=max(intersection.first,points[i][0]);
                    intersection.second=min(intersection.second,points[i][1]);
                }else {
                    ans+=1;
                    intersection={points[i][0],points[i][1]};
                }

                if(i==n-1) {
                    ans+=1;
                }
            }
            
            return ans;
        }
    };