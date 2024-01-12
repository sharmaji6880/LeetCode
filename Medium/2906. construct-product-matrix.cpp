class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> ans(n,vector<int>(m,0));

        vector<long> arr;

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                arr.push_back(grid[i][j]);
            }
        }
        vector<long> prefixProduct(arr.size(),0);
        vector<long> suffixProduct(arr.size(),0);

        for(int i=0;i<arr.size();i++) {
            if(i==0) {
                prefixProduct[i]=1;
                continue;
            }
            prefixProduct[i]= (prefixProduct[i-1] % 12345) * (arr[i-1] % 12345);
        }

        for(int i=arr.size()-1;i>=0;i--) {
            if(i==arr.size()-1) {
                suffixProduct[i]=1;
                continue;
            }
            suffixProduct[i]= (suffixProduct[i+1] % 12345) * (arr[i+1] % 12345);
        }

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                ans[i][j]= (prefixProduct[m*i+j] * suffixProduct[m*i+j]) % 12345;
            }
        }
        return ans;
    }
};
