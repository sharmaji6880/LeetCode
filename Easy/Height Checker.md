> **Problem Number:** 1051 <br>
> **Problem Name:** Height Checker <br>
> **Problem Link:** [https://leetcode.com/problems/height-checker/](https://leetcode.com/problems/height-checker/) <br>

    class Solution {
    public:
        int heightChecker(vector<int>& heights) {
            vector<int> expected = heights;
            sort(expected.begin(),expected.end());

            int count = 0;

            for(int i=0;i<heights.size();i++) {
                if(heights[i] != expected[i]) {
                    count+=1;
                }
            }

            return count;
        }
    };