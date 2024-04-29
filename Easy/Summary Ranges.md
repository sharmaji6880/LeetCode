> **Problem Number:** 228 <br>
> **Problem Name:** Summary Ranges <br>
> **Problem Link:** [https://leetcode.com/problems/summary-ranges/](https://leetcode.com/problems/summary-ranges/) <br>

    class Solution {
    public:
        vector<string> summaryRanges(vector<int>& nums) {
            vector<string> ans;
            int n = nums.size();
            int left=0,right=0;
            string s;
            while(right < n) {
                if(right == n-1) {
                    if(left == right) {
                        ans.push_back(to_string(nums[left]));
                    }else {
                        s = "";
                        s+=to_string(nums[left]);
                        s+="->";
                        s+=to_string(nums[right]);
                        ans.push_back(s);
                    }
                    right++;
                    continue;
                }
                if(nums[right+1] == nums[right]+1) {
                    right++;
                }
                else {
                    if(left == right) {
                        ans.push_back(to_string(nums[left]));
                        right++;
                        left=right;
                        continue;
                    }
                    s = "";
                    s+=to_string(nums[left]);
                    s+="->";
                    s+=to_string(nums[right]);
                    ans.push_back(s);
                    right++;
                    left=right;
                }
            }
            return ans;
        }
    };