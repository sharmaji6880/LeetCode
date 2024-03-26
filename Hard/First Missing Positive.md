> **Problem Number:** 41 <br>
> **Problem Name:** First Missing Positive <br>
> **Link:** [https://leetcode.com/problems/first-missing-positive/](https://leetcode.com/problems/first-missing-positive/) <br>

**Using Map**

    class Solution {
    public:
        int firstMissingPositive(vector<int>& nums) {
            map<int,int> mymap;
            int n=nums.size();
            for(int i=0;i<n;i++) {
                mymap[nums[i]]++;
            }
            for(int i=1;true;++i) {
                if(!mymap.count(i)) {
                    return i;
                }
            }
            return 0;
        }
    };
