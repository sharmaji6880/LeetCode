> **Problem No.:** 1534  
> **Problem Name:** Count Good Triplets  
> **Problem Link:** [https://leetcode.com/problems/count-good-triplets/description/](https://leetcode.com/problems/count-good-triplets/description/)  


    class Solution {
    public:
        int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
            int count = 0, n = arr.size();
            int diff1,diff2,diff3;
            for(int i=0;i<n-2;i++) {
                for(int j=i+1;j<n-1;j++) {
                    for(int k=j+1;k<n;k++) {
                        diff1 = abs(arr[i]-arr[j]);
                        diff2 = abs(arr[j]-arr[k]);
                        diff3 = abs(arr[i]-arr[k]);
    
                        if(diff1 <= a && diff2 <=b && diff3 <=c) count++;
                    }
                }
            }
            return count;
        }
    };