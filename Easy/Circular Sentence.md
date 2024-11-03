> **Problem Number:** 2490 <br>
> **Problem Name:** Circular Sentence <br>
> **Problem Link:** [https://leetcode.com/problems/circular-sentence](https://leetcode.com/problems/circular-sentence) <br>

    class Solution {
    public:
        bool isCircularSentence(string sentence) {
            int n = sentence.size();
            if(sentence[0] != sentence[n-1]) {
                return false;
            }
            for(int i=0;i<n;i++) {
                if(sentence[i] == ' ' && sentence[i-1] != sentence[i+1]) {
                    return false;
                }
            }
            return true;
        }
    };