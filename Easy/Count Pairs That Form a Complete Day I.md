> **Problem Number:** 3184 <br>
> **Problem Name:** Count Pairs That Form a Complete Day I <br>
> **Problem Link:** [https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i](https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i) <br>

    class Solution {
    public:
        int countCompleteDayPairs(vector<int>& hours) {
            int count = 0;
            int n = hours.size();

            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    if( (hours[i] + hours[j]) % 24 == 0) {
                        count += 1;
                    }
                }
            }
            return count;
        }
    };