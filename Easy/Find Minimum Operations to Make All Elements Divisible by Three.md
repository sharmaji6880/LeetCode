> **Problem Number:** 3190 <br>
> **Problem Name:** Find Minimum Operations to Make All Elements Divisible by Three <br>
> **Problem Link:** [https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/](https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/) <br>

    class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
            int count = 0;
            for(auto x:nums) {
                if( (x-1) % 3 == 0  || (x+1) % 3 == 0) {
                    count += 1;
                }
            }
            return count;
        }
    };