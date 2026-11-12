**Problem No.:** 3105  
**Problem Name:** Longest Strictly Increasing or Strictly Decreasing Subarray  
**Problem Link:** [LeetCode 3105 - Longest Strictly Increasing or Strictly Decreasing Subarray](https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/)


```java
class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int n = nums.length, maxLen = Integer.MIN_VALUE;

        Stack<Integer> st = new Stack<>();
        for(int i=0;i<n;i++) {
            if(!st.empty() && nums[i] <= st.peek()) {
                st.clear();
            }
            st.push(nums[i]);
            maxLen = Math.max(maxLen,st.size());     
        }
        st.clear();
        for(int i=0;i<n;i++) {
            if(!st.empty() && nums[i] >= st.peek()) {
                st.clear();
            }
            st.push(nums[i]);
            maxLen = Math.max(maxLen,st.size());     
        }
        return maxLen;
        
    }
}
```
