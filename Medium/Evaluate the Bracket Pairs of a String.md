> **Problem No.:** 1807  
> **Problem Name:** Evaluate the Bracket Pairs of a String  
> **Problem Link:** [https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/description/](https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/description/)  


    class Solution {
        public String evaluate(String s, List<List<String>> knowledge) {
            Map<String,String> mp = new HashMap<>();
            for(int i=0;i<knowledge.size();i++) {
                String key = knowledge.get(i).get(0);
                String value = knowledge.get(i).get(1);
                mp.put(key,value);
            }
            StringBuilder result = new StringBuilder();
            String key = new String();
            int n = s.length();
            boolean flag = false;
            for(int i=0;i<n;i++) {
                if(s.charAt(i) == '(') {
                    flag = true;
                }else if(s.charAt(i) == ')') {
                    if(mp.containsKey(key)) {
                        result.append(mp.get(key));
                    }else {
                        result.append("?");
                    }
                    key = "";
                    flag = false;
                }else if(flag==false){
                    result.append(s.charAt(i));
                }else {
                    key += s.charAt(i);
                }
            }
            return new String(result);
    
        }
    }