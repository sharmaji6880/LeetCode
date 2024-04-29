> **Problem Number:** 171 <br>
> **Problem Name:** Excel Sheet Column Number <br>
> **Problem Link:** [https://leetcode.com/problems/excel-sheet-column-number/](https://leetcode.com/problems/excel-sheet-column-number/) <br>

    class Solution {
    public:
        int titleToNumber(string columnTitle) {
            int n = columnTitle.size();
            int ans = 0;
            for(int i=0;i<n;i++) {
                ans += (columnTitle[i]-'A'+1) * pow(26,n-1-i);
            }
            return ans;
        }
    };