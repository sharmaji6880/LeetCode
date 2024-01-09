class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        set<int> s;
        for(int i=1;i<=n;i++) {
            s.insert(i);
        }

        for(int i=0;i<n;i++) {
            set<int> Set;
            for(int j=0;j<n;j++) {
                Set.insert(matrix[i][j]);
            }
            if(Set!=s) {
                return false;
            }
        }
        for(int j=0;j<n;j++) {
            set<int> Set;
            for(int i=0;i<n;i++) {
                Set.insert(matrix[i][j]);
            }
            if(Set!=s) {
                return false;
            }
        }
        return true;
    }
};
