> **Problem Number:** 2554 <br>
> **Problem Name:** Maximum Number of Integers to Choose From a Range I <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i](https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i) <br>

    // Space Complexity: O(n)
    // Time Complexity: O(nlogn)
    class Solution {
    public:
        int maxCount(vector<int>& banned, int n, int maxSum) {
            int sum = 0, count = 0;
            set<int> s;
            for( auto x:banned ) {
                if ( x <= n ) s.insert(x);
            }
            for(int i=1;i<=n;i++) {
                if ( s.count(i) ) continue;
                if( sum + i <= maxSum ) {
                    ++count;
                    sum += i;
                }
            }
            return count;

        }
    };