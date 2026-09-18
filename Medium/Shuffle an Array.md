> **Problem No.:** 384  
> **Problem Name:** Shuffle an Array  
> **Problem Link:** [https://leetcode.com/problems/shuffle-an-array/description/](https://leetcode.com/problems/shuffle-an-array/description/)  


    class Solution {
    
        int[] originalArray;
        int[] shuffledArray;
        Random rand;
    
        public Solution(int[] nums) {
            this.originalArray = nums.clone();
            this.shuffledArray = nums.clone();
            rand =  new Random();
        }
        
        public int[] reset() {
            this.shuffledArray = this.originalArray.clone();
            return this.shuffledArray;
        }
        
        public int[] shuffle() {
            int n = this.shuffledArray.length;
            int randomIndex, temp;
            for(int i=0;i<n;i++) {
                randomIndex = this.rand.nextInt(i,n);
                temp = this.shuffledArray[i];
                this.shuffledArray[i] = this.shuffledArray[randomIndex];
                this.shuffledArray[randomIndex] = temp;
            }
            return this.shuffledArray;
        }
    }