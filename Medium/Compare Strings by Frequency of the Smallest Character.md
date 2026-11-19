**Problem No.:** 1170  
**Problem Name:** Compare Strings by Frequency of the Smallest Character  
**Problem Link:** [LeetCode 1170 - Compare Strings by Frequency of the Smallest Character](https://leetcode.com/problems/compare-strings-by-frequency-of-the-smallest-character/description/)

<!--### Brute Force Method-->

```java
class Solution {
    public int f(String s) {
        int[] arr = new int[26];
        for(char c:s.toCharArray()) {
            arr[c-97]++;
        }
        for(int n:arr) {
            if(n!=0) return n;
        }
        return -1;
    }
    public int[] numSmallerByFrequency(String[] queries, String[] words) {
        int n = words.length, q = queries.length;
        int[] freq = new int[n];
        for(int i=0;i<n;i++) {
            freq[i] = f(words[i]);
        }
        int[] result = new int[q];
        for(int i=0;i<q;i++) {
            int a = f(queries[i]);
            int count = 0;
            for(int j=0;j<n;j++) {
                if(a < freq[j]) count++;
            }
            result[i] = count;
        }
        return result;
    }
}
```
