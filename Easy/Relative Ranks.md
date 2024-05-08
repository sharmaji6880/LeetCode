> **Problem Number:** 506 <br>
> **Problem Name:** Relative Ranks <br>
> **Problem Link:** [https://leetcode.com/problems/relative-ranks/](https://leetcode.com/problems/relative-ranks/) <br>

    class Solution {
    public:
        vector<string> findRelativeRanks(vector<int>& score) {
            vector<int> arr = score;
            sort(arr.begin(),arr.end());
            reverse(arr.begin(),arr.end());
            
            map<int,string> m;
            for(int i=0;i<score.size();i++) {
                if(i==0) {
                    m[arr[i]] = "Gold Medal";
                    continue;
                }
                if(i==1) {
                    m[arr[i]] = "Silver Medal";
                    continue;
                }
                if(i==2) {
                    m[arr[i]] = "Bronze Medal";
                    continue;
                }
                m[arr[i]] = to_string(i+1);
            }
            vector<string> ans;
            for(int i=0;i<score.size();i++) {
                ans.push_back(m[score[i]]);
            }
            return ans;

        }
    };