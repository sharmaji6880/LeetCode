> **Problem No.:** 2089  
> **Problem Name:** Find Target Indices After Sorting Array  
> **Problem Link:** [https://leetcode.com/problems/find-target-indices-after-sorting-array/description/](https://leetcode.com/problems/find-target-indices-after-sorting-array/description/)  


    class Solution {
        public List<Integer> targetIndices(int[] nums, int target) {
            Arrays.sort(nums);
            List<Integer> arr = new ArrayList<>();
            for(int i=0;i<nums.length;i++) {
                if(nums[i] == target) {
                    arr.add(i);
                }
            }
            return arr;
        }
    }