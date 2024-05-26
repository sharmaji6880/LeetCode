> **Problem Number:** 3159 <br>
> **Problem Name:** Find Occurrences of an Element in an Array <br>
> **Problem Link:** [https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/](https://leetcode.com/problems/find-occurrences-of-an-element-in-an-array/) <br>

    class Solution {
    public:
        vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
            int occurence = 1;
            map<int,int> m;
            for(int i=0;i<nums.size();i++) {
                if(nums[i]!=x) {
                    continue;
                }
                m[occurence] = i;
                occurence++;
            }
            vector<int> ans;
            for(int i=0;i<queries.size();i++) {
                if( m.find(queries[i]) == m.end() ) {
                    ans.push_back(-1);
                    continue;
                }
                ans.push_back(m[queries[i]]);
            }
            return ans;
        }
    };