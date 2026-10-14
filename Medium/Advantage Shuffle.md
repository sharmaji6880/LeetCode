> **Problem No.:** 870  
> **Problem Name:** Advantage Shuffle  
> **Problem Link:** [https://leetcode.com/problems/advantage-shuffle/description/](https://leetcode.com/problems/advantage-shuffle/description/)  


    class Solution {
        public int binarySearch(List<Integer> arr, int target) {
            int l = 0, r = arr.size()-1, mid, index = -1;
            while(l<=r) {
                mid = (l+r)/2;
                if(arr.get(mid) <= target) {
                    l = mid + 1;
                }else if(arr.get(mid) > target) {
                    index = mid;
                    r = mid - 1;
                }
            }
            return index;
        }
        public int[] advantageCount(int[] nums1, int[] nums2) {
            Arrays.sort(nums1);
            List<Integer> arr = new ArrayList<>();
            for(int n:nums1) {
                arr.add(n);
            }
            int n = nums1.length, index;
            int[] result = new int[n];
            for(int i=0;i<n;i++) {
                index = binarySearch(arr,nums2[i]);
                if(index == -1) {
                    result[i] = arr.get(0);
                    arr.remove(0);
                }
                else {
                    result[i] = arr.get(index);
                    arr.remove(index);
                }
            }
            return result;
    
        }
    }