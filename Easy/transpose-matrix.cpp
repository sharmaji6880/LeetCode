class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        vector<vector<int>> answer;
        for(int j=0;j<n;j++) {
            vector<int> arr={};
            for(int i=0;i<m;i++) {
                arr.push_back(matrix[i][j]);
            }
            answer.push_back(arr);
        }
        return answer;
        
    }
};
