> **Problem No:** 565 <br>
> **Problem Name:** Array Nesting <br>
> **Problem Link:** [https://leetcode.com/problems/array-nesting/](https://leetcode.com/problems/array-nesting/) <br>

**Brute Force Method:**

    // This is a Brute Force Method and may result into TLE for larger inputs
    class Solution {
    public:
        int arrayNesting(vector<int>& nums) {
            int index;
            set<int> visited;
            int maxLen = INT_MIN;
            for(int i=0;i<nums.size();i++) {
                index = i;
                while(true) {
                    visited.insert(nums[index]);
                    index = nums[index];
                    if(visited.count(nums[index])) {

                        if( (int) visited.size() > maxLen) {
                            cout<<"Hello"<<endl;
                            maxLen = visited.size();
                        }
                        visited.clear();
                        break;
                    }
                }
            }
            return maxLen;
        }
    };