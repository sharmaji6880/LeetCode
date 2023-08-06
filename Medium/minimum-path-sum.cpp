class Solution {
public:
    map<pair<int,int>,int> m;
    int minSum(vector<vector<int>> &grid,int a,int b) {
        if(a==grid.size()-1) {
            if(m.count({a,b})) {
                return m[{a,b}];
            }
            int count=0;
            for(int j=b;j<(int)grid[0].size();j++) {
                count+=grid[a][j];
            }
            m[{a,b}]=count;
            return count;
        }
        else if(b==grid[0].size()-1) {
            if(m.count({a,b})) {
                return m[{a,b}];
            }
            int count=0;
            for(int i=a;i<(int)grid.size();i++) {
                count+=grid[i][b];
            }
            m[{a,b}]=count;
            return count;
        }
        int x=grid[a][b]+min(m.count({a+1,b})?m[{a+1,b}]:minSum(grid,a+1,b),m.count({a,b+1})?m[{a,b+1}]:minSum(grid,a,b+1));
        m[{a,b}]=x;
        return x;
    }
    int minPathSum(vector<vector<int>>& grid) {
        return minSum(grid,0,0);
    }
};
