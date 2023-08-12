lass Solution {
public:
    int uniquePaths(int m, int n) {
        int arr[m][n];
        for(int i=m-1;i>=0;i--) {
            for(int j=n-1;j>=0;j--) {
                if(i==m-1 && j==n-1) {
                    arr[i][j]=1;
                    continue;
                }
                if(i==m-1 && j!=n-1) {
                    arr[i][j]=arr[i][j+1];
                    continue;
                }
                if(j==n-1 && i!=m-1) {
                    arr[i][j]=arr[i+1][j];
                    continue;
                }
                long x=(long)arr[i+1][j] + (long)arr[i][j+1];
                if(x>INT_MAX) {
                    arr[i][j]=0;
                }
                arr[i][j]=x;
            }
        }
        return arr[0][0];
    }
};
