> **Problem No.:** 1668  
> **Problem Name:** Maximum Repeating Substring  
> **Problem Link:** [https://leetcode.com/problems/maximum-repeating-substring/description/](https://leetcode.com/problems/maximum-repeating-substring/description/)  


    class Solution {
        public boolean isSubstring(String needle, String haystack) {
            int m = needle.length(), n = haystack.length();
            boolean matchFound = true;
            for(int i=0;i<=n-m;i++) {
                for(int j=0;j<m;j++) {
                    matchFound = true;
                    if(needle.charAt(j) == haystack.charAt(i+j)) {
                        continue;
                    }
                    matchFound = false;
                    break;
                }
                if(matchFound) return true;
            }
            return false;
        }
        public int maxRepeating(String sequence, String word) {
            int count = sequence.length() / word.length();
            String s = "";
            int ans = 0;
            for(int i=1;i<=count;i++) {
                s += word;
                if(isSubstring(s,sequence)) {
                    ans = i;
                    continue;
                }
                break;
            }
            return ans;
            
        }
    }