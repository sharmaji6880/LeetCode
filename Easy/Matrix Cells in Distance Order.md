> **Problem Number:** 1030 <br>
> **Problem Name:** Matrix Cells in Distance Order <br>
> **Problem Link:** [https://leetcode.com/problems/matrix-cells-in-distance-order/](https://leetcode.com/problems/matrix-cells-in-distance-order/) <br>

    #define p pair<int,int>
    class Solution {
    public:
        static bool cmp( pair<p,int> &p1, pair<p,int> &p2) {
            return p1.second < p2.second;
        }
        vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
            int m = rows;
            int n = cols;

            vector<pair<p,int>> v;
            vector<vector<int>> ans;
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    v.push_back( { {i,j} , abs(i-rCenter) + abs(j-cCenter) } );
                }
            }
            sort(v.begin(),v.end(),cmp);
            vector<int> V;
            for(auto x:v) {
                V = {x.first.first,x.first.second};
                ans.push_back(V);
            }
            return ans;


        }
    };