> **Problem Number:** 2553 <br>
> **Problem Name:** Separate the Digits in an Array <br>
> **Problem Link:** [https://leetcode.com/problems/separate-the-digits-in-an-array/](https://leetcode.com/problems/separate-the-digits-in-an-array/) <br>

    class Solution {
    public:
        vector<int> separateDigits(vector<int>& nums) {
            vector<int> ans; // This vector will store the final answer

            for(auto num:nums) { // We iterate over every num in nums
                string str = to_string(num); // We convert the number to string
                for(auto c:str) { // We iterate over the string
                    ans.push_back(c-'0'); // We convert the ith character to its corresponding int value
                    // and push it to the ans vector
                }
            }
            return ans; // We finally return the ans vector
        }
    };