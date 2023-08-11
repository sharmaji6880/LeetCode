class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++) {
            if(i==0) {
                ans[i].push_back(1);
                continue;
            }
            if(i==1) {
                ans[i]={1,1};
                continue;
            }
            ans[i].push_back(1);
            for(int j=0;j<(int)ans[i-1].size()-1;j++) {
                ans[i].push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            ans[i].push_back(1);
        }
        return ans;
    }
};
