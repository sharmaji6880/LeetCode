> **Problem No.:** 848  
> **Problem Name:** Shifting Letters  
> **Problem Link:** [https://leetcode.com/problems/shifting-letters/description/](https://leetcode.com/problems/shifting-letters/description/)  


    class Solution {
        public String shiftingLetters(String s, int[] shifts) {
    
            int n = shifts.length;
            long[] pSum = new long[n];
            pSum[0] = shifts[0];
    
            StringBuilder sb = new StringBuilder("");
    
            for(int i=1;i<n;i++) {
                pSum[i] = pSum[i-1] + shifts[i];
            }
            long shift;
            for(int i=0;i<n;i++) {
                shift = pSum[n-1] - (i == 0? 0 : pSum[i-1]);
                shift %= 26;
                if(s.charAt(i) + shift <= 122) {
                    sb.append((char) (s.charAt(i) + shift));
                }else {
                    sb.append((char) (shift - 26 + s.charAt(i)) );
                }
            }
            return new String(sb);
        }
    }