> **Problem No.:** 978  
> **Problem Name:** Longest Turbulent Subarray  
> **Problem Link:** [https://leetcode.com/problems/longest-turbulent-subarray/description/](https://leetcode.com/problems/longest-turbulent-subarray/description/)  


    class Solution {
        public int maxTurbulenceSize(int[] arr) {
            int n = arr.length,  currLen = 0, maxLen = 0;
            for(int i=0;i<n;i++) {
                if(currLen == 0) {
                    currLen++;
                }else if(currLen == 1) {
                    if(arr[i] != arr[i-1]) currLen++;
                }
                else {
                    if( (arr[i-1] > arr[i-2] && arr[i] < arr[i-1]) || (arr[i-1] < arr[i-2] && arr[i] > arr[i-1]) ) {
                        currLen++;
                    }
                    else {
                        currLen = 2;
                    }
                }
                maxLen = Math.max(maxLen,currLen);
            }
            return maxLen;
        }
    }