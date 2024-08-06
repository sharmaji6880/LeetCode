>**Problem Number:** 3242 <br>
>**Problem Name:** Design Neighbor Sum Service <br>
>**Problem Link:** [https://leetcode.com/problems/design-neighbor-sum-service/](https://leetcode.com/problems/design-neighbor-sum-service/) <br>

    class neighborSum {
    public:
        map<int, pair<int,int> > m;
        vector<vector<int>> matrix;

        int accessValue(int i,int j) {
            int n = matrix.size();

            if(i < 0 || i ==n || j < 0 || j==n ) {
                return 0;
            }
            return matrix[i][j];
        }
        neighborSum(vector<vector<int>>& grid) {
            matrix = grid;
            int n = grid.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++) {
                    m[grid[i][j]] = {i,j};
                }
            }
        }
        
        int adjacentSum(int value) {
            int sum = 0;
            int i = m[value].first;
            int j = m[value].second;

            sum += accessValue(i-1,j);
            sum += accessValue(i,j-1);
            sum += accessValue(i+1,j);
            sum += accessValue(i,j+1);

            return sum;
        }
        
        int diagonalSum(int value) {
            int sum = 0;
            int i = m[value].first;
            int j = m[value].second;

            sum += accessValue(i-1,j-1);
            sum += accessValue(i-1,j+1);
            sum += accessValue(i+1,j-1);
            sum += accessValue(i+1,j+1);

            return sum;
        }
    };