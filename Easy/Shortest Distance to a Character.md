> **Problem Number:** 821 <br>
> **Problem Name:** Shortest Distance to a Character <br>
> **Link:** [https://leetcode.com/problems/shortest-distance-to-a-character/](https://leetcode.com/problems/shortest-distance-to-a-character/) <br>

    class Solution {
    public:
        vector<int> shortestToChar(string s, char c) {
            vector<int> indices;
            vector<int> ans;

            int n = s.size();

            for(int i=0;i<n;i++) {
                if(s[i]==c) {
                    indices.push_back(i);
                }
            }
            for(int i=0;i<n;i++) {
                int Min = INT_MAX;
                for(int j=0;j<indices.size();j++) {
                    if(abs(indices[j]-i) < Min) {
                        Min = abs(indices[j]-i);
                    }
                }
                ans.push_back(Min);
            }
            return ans;

        }
    };