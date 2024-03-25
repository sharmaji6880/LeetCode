> **Problem Number:** 442 <br>
> **Problem Name:** Find All Duplicates in an Array <br>
> **Link:** [https://leetcode.com/problems/find-all-duplicates-in-an-array/](https://leetcode.com/problems/find-all-duplicates-in-an-array/)

**Using Map**

    class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            vector<int> ans;
            for(auto x:m) {
                if(x.second==2) {
                    ans.push_back(x.first);
                }
            }
            return ans;
        }
    };

**Using Set** 

    class Solution {
    public:
        vector<int> findDuplicates(vector<int>& nums) {
            set<int> s;
            vector<int> ans;
            for(int i=0;i<nums.size();i++) {
                if(s.count(nums[i])) {
                    ans.push_back(nums[i]);
                }
                s.insert(nums[i]);
            }
            return ans;
        }
    };