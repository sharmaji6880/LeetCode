> **Problem No.:** 2913  
> **Problem Name:** Subarrays Distinct Element Sum of Squares I  
> **Problem Link:** [https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/](https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/)  


    class Solution {
        public int sumCounts(List<Integer> nums) {
            int result = 0, n = nums.size();
            Set<Integer> set;
            for(int i=0;i<n;i++) {
                set = new HashSet<>();
                for(int j=i;j<n;j++) {
                    set.add(nums.get(j));
                    result += set.size() * set.size();
                }
            }
            return result; 
        }
    }