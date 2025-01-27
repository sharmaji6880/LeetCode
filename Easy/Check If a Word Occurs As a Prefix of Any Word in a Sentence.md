> **Problem Number:** 1455 <br>
> **Problem Name:** Check If a Word Occurs As a Prefix of Any Word in a Sentence <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence](https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence) <br>

    class Solution {
        public boolean isPrefix(String s1, String s2) {
            if( s1.length() > s2.length() ) {
                return false;
            }
            String s3 = s2.substring(0,s1.length());
            if( s1.equals(s3) ) {
                return true;
            }
            return false;
        }
        public int isPrefixOfWord(String sentence, String searchWord) {
            int n = sentence.length();
            int prev = 0;
            int index = 1;

            for(int i=0;i<n;i++) {
                if( sentence.charAt(i) == ' ' ) {
                    if( isPrefix(searchWord,sentence.substring(prev,i)) ) {
                        return index;
                    }
                    prev = i + 1;
                    index += 1;
                }else if( i == n - 1 ) {
                    if( isPrefix(searchWord,sentence.substring(prev)) ) {
                        return index;
                    }
                }
            }
            return -1;
        }
    }