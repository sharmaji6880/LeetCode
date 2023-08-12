lass Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        for(int i=m-1;i>=0;i--) {
            for(int j=n-1;j>=0;j--) {
                if(arr[i][j]) {
                    arr[i][j]=0;
                    continue;
                }
                if(i==m-1 && j==n-1) {
                    arr[i][j]=1;
                    continue;
                }
                if(i==m-1 && j!=n-1) {
                    arr[i][j]=arr[i][j+1];
                    continue;
                }
                if(i!=m-1 && j==n-1) {
                    arr[i][j]=arr[i+1][j];
                    continue;
                }
                long x=(long)arr[i+1][j]+(long)arr[i][j+1];
                if(x>2147483647) {
                    arr[i][j]=0;
                    continue;
                }
                arr[i][j]=x;
            }
        }
        return arr[0][0];
    }
};
