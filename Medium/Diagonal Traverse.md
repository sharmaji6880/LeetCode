> **Problem Number:** 498 <br>
> **Problem Name:** Diagonal Traverse <br>
> **Problem Link:** [https://leetcode.com/problems/diagonal-traverse/](https://leetcode.com/problems/diagonal-traverse/) <br>

    class Solution {
    public:
        vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
            map< int, vector<int> > mp;
            int m = mat.size();
            int n = mat[0].size();

            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    mp[i+j].push_back(mat[i][j]);
                }
            }
            vector<int> ans;
            for(auto x:mp) {
                int sum = x.first;
                int size = x.second.size();
                if( sum % 2 == 0 ) {
                    for(int i = size-1; i >= 0; i--) {
                        ans.push_back(x.second[i]);
                    }
                }else {
                    for(int i = 0; i < size; i++) {
                        ans.push_back(x.second[i]);
                    }
                }
            }
            return ans;
        }
    };