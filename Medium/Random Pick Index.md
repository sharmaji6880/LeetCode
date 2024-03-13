> **Problem Number:** 398 <br>
> **Problem Name:** Random Pick Index <br>
> **Link:** [https://leetcode.com/problems/random-pick-index/](https://leetcode.com/problems/random-pick-index/) <br>

    class Solution {
    public:
        map<int,vector<int>> m;
        
        Solution(vector<int>& nums) {
            for(int i=0;i<nums.size();i++) {
                if(m.count(nums[i]) == 0) {
                    m[nums[i]]={i};
                }else {
                    m[nums[i]].push_back(i);
                }
            }
            srand(time(0));
        }
        
        int pick(int target) {
            int n = m[target].size();
            int index = rand()%n;
            return m[target][index];
        }
    };
