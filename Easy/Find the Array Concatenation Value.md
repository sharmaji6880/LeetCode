> **Problem Number:** 2562 <br>
> **Problem Name:** Find the Array Concatenation Value <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-array-concatenation-value/](https://leetcode.com/problems/find-the-array-concatenation-value/) <br>

    class Solution {
    public:
        long long findTheArrayConcVal(vector<int>& nums) {
            long long concatenation_value = 0; // This variable will store the concatenation value of nums

            // We will be using a two-pointer approach

            int left = 0; // left represents the left index of nums
            int right = nums.size() - 1; // right represents the right index of nums

            while( left <= right ) { 
                if( left == right ) { // This means that only one element is left
                    concatenation_value += nums[left];
                    left += 1; // We keep moving the left index to the right by 1 step
                    right -= 1; // and right index to the left by 1 step every time
                    continue;
                }
                string concatenated_string = to_string(nums[left]) + to_string(nums[right]);
                concatenation_value += stoi(concatenated_string);
                left += 1;
                right -= 1;
            }
            return concatenation_value; // We finally return the concatenation_value of nums
        }
    };