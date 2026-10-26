> **Problem No.:** 1003  
> **Problem Name:** Check If Word Is Valid After Substitutions  
> **Problem Link:** [https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/description/](https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/description/)  


    class Solution {
        public boolean abcSuffix(List<Character> arr) {
            int n = arr.size();
            return arr.get(n-3) == 'a' && arr.get(n-2) == 'b' && arr.get(n-1) == 'c';
        }
    
        public boolean isValid(String s) {
            List<Character> arr = new ArrayList<>();
            int n = s.length();
            boolean result;
            for(int i=0;i<n;i++) {
                arr.add(s.charAt(i));
                if(arr.size() < 3) continue;
                result = abcSuffix(arr);
                if(result) {
                    for(int c=1;c<=3;c++) {
                        arr.remove(arr.size()-1);
                    }
                }
            }
            return arr.size() == 0;
        }
    }