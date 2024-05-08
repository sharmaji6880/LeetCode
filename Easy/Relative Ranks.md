> **Problem Number:** 506 <br>
> **Problem Name:** Relative Ranks <br>
> **Problem Link:** [https://leetcode.com/problems/relative-ranks/](https://leetcode.com/problems/relative-ranks/) <br>

    class Solution {
    public:
        static bool cmp(int a , int b) {
            return a > b;
        }
        vector<string> findRelativeRanks(vector<int>& score) {
            vector<int> arr = score;
            sort(arr.begin(),arr.end(),cmp);

            map<int,int> m;
            for(int i=0;i<score.size();i++) {
                m[score[i]] = i;
            }
            vector<string> ans(score.size());

            for(int i=0;i<arr.size();i++) {
                if(i==0) {
                    ans[ m[arr[i]] ] = "Gold Medal";
                }else if(i==1) {
                    ans[ m[arr[i]] ] = "Silver Medal";
                }else if(i==2) {
                    ans[ m[arr[i]] ] = "Bronze Medal";
                }else {
                    ans[ m[arr[i]] ] = to_string(i+1);
                }
            }
            return ans;
        }
    };