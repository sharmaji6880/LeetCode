> **Problem Number:** 3396 <br>
> **Problem Name:** Minimum Number of Operations to Make Elements in Array Distinct <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct](https://leetcode.com/problems/minimum-number-of-operations-to-make-elements-in-array-distinct) <br>

    class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
            int count = 0;
            int n = nums.size();
            set<int> s;
            for(int i=n-1;i>=0;i--) {
                s.insert(nums[i]);
                if( s.size() != n - i ) {
                    break;
                }
                count += 1;
            }
            if( count == n ) {
                return 0;
            }
            int rem = n - count;
            if( rem % 3 == 0) {
                return rem / 3;
            }
            return ( rem + (3-rem%3) ) / 3;
        }
    };