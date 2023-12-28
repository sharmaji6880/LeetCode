class Solution {
public:
    vector<string> board;
    set<int> cols,posDiag,negDiag;
    int ans;
    void backtrack(int r,int n) {
        if(r==n) {
            ans++;
            return;
        }
        for(int c=0;c<n;c++) {
            if(cols.count(c) || posDiag.count(r+c) || negDiag.count(r-c)) {
                continue;
            }
            board[r][c]='Q';
            cols.insert(c);
            posDiag.insert(r+c);
            negDiag.insert(r-c);

            backtrack(r+1,n);

            board[r][c]='.';
            cols.erase(c);
            posDiag.erase(r+c);
            negDiag.erase(r-c);
        }
    }
    int totalNQueens(int n) {
        string s="";
        for(int i=0;i<n;i++) {
            s.push_back('.');
        }
        for(int i=0;i<n;i++) {
            board.push_back(s);
        }
        backtrack(0,n);
        return ans;
    }
};
