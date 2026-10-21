> **Problem No.:** 973  
> **Problem Name:** K Closest Points to Origin  
> **Problem Link:** [https://leetcode.com/problems/k-closest-points-to-origin/description/](https://leetcode.com/problems/k-closest-points-to-origin/description/)  


    class Solution {
        public int distance(int[] point) {
            int ans = 0;
            ans += point[0] * point[0];
            ans += point[1] * point[1];
            return ans;
        }
        public int[][] kClosest(int[][] points, int k) {
            Arrays.sort(points, 
            (a,b) -> distance(a)-distance(b)
            );
            int[][] result = new int[k][2];
            for(int i=0;i<k;i++) {
                result[i] = points[i];
            }
            return result;
        }
    }