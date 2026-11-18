**Problem No.:** 845  
**Problem Name:** Longest Mountain in Array  
**Problem Link:** [LeetCode 845 - Longest Mountain in Array](https://leetcode.com/problems/longest-mountain-in-array/description/)

<!--### Brute Force Method-->

```java
class Solution {
    public int longestMountain(int[] arr) {

        int n = arr.length, maxLen = Integer.MIN_VALUE;

        for(int i=0;i<n;i++) {
            int l = i-1, prev = i, len = 0;
            while(l>=0 && arr[l] < arr[prev]) {
                l--;prev--;
            }
            int r = i+1;
            prev = i;
            while(r < n && arr[r] < arr[prev]) {
                r++;
                prev++;
            }
            if((i-l) > 1 && (r-i-1) >= 1) {
                len += (i-l) + (r-i-1);
            }
            
            maxLen = Math.max(maxLen,len);
        }
        return maxLen;
        
    }
}
```
