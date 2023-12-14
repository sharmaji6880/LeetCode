class Solution {
public:
    bool between(int i,int left,int right) {
        if(i>=left && i<=right) {
            return true;
        }
        return false;
    }
    int gridNumber(int i,int j) {
        if(i<=2) {
            if(j<=2) {
                return 0;
            }else if(j<=5) {
                return 1;
            }else {
                return 2;
            }
        }else if(i<=5) {
            if(j<=2) {
                return 3;
            }else if(j<=5) {
                return 4;
            }else {
                return 5;
            }
        }else {
            if(j<=2) {
                return 6;
            }else if(j<=5) {
                return 7;
            }else {
                return 8;
            }
        }

        return -1;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<int>> rows(9);
        vector<set<int>> cols(9);
        vector<set<int>> grids(9);

        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                if(board[i][j]=='.') {
                    continue;
                }
                int num=board[i][j] -'0';
                if(rows[i].count(num)) {
                    return false;
                }else {
                    rows[i].insert(num);
                }

                if(cols[j].count(num)) {
                    return false;
                }else {
                    cols[j].insert(num);
                }

                int gridnum=gridNumber(i,j);

                if(grids[gridnum].count(num)) {
                    return false;
                }else {
                    grids[gridnum].insert(num);
                }
            }
        }
        return true;
    }
};
