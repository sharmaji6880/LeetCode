> **Problem Number:** 42 <br>
> **Problem Name:** Trapping Rain Water <br>
> **Problem Link:** [https://leetcode.com/problems/trapping-rain-water/](https://leetcode.com/problems/trapping-rain-water/) <br>

    class Solution {
    public:
        int trap(vector<int>& height) {
            int Max = -1;
            int n = height.size();
            vector<int> maxFromLeft(n,-1);
            vector<int> maxFromRight(n,-1);
            for(int i=0;i<n;i++) {
                if(Max > height[i]) {
                    maxFromLeft[i]=Max;
                }
                if(height[i] > Max) {
                    Max = height[i];
                }
            }
            Max = -1;
            for(int i=n-1;i>=0;i--) {
                if(Max > height[i]) {
                    maxFromRight[i]=Max;
                }
                if(height[i] > Max) {
                    Max = height[i];
                }
            }
            int quantity = 0;
            for(int i=0;i<n;i++) {
                if( maxFromLeft[i]==-1 || maxFromRight[i]==-1 ) {
                    continue;
                }
                quantity += min(maxFromRight[i],maxFromLeft[i]) - height[i];
            }
            return quantity;
        }
    };