**Problem No.:** 985  
**Problem Name:** Sum of Even Numbers After Queries  
**Problem Link:** [LeetCode 985 - Sum of Even Numbers After Queries](https://leetcode.com/problems/sum-of-even-numbers-after-queries/description/)

<!--### Brute Force Method-->

```java
class Solution {
    public int[] sumEvenAfterQueries(int[] nums, int[][] queries) {

        int q = queries.length, evenSum = 0;
        for(int num:nums) {
            if(num%2 == 0) evenSum += num;
        }

        int[] answer = new int[q];
        for(int i=0;i<q;i++) {
            int val = queries[i][0];
            int index = queries[i][1];

            if(nums[index] % 2 == 0 && val % 2 == 0) {
                evenSum += val;
            }else if(nums[index] % 2 == 0 && val%2 != 0) {
                evenSum -= nums[index];
            }else if(val%2 != 0) {
                evenSum += nums[index] + val;  
            }
            nums[index] += val;
            answer[i] = evenSum;
        }
        return answer;
    }
}
```
