> **Problem Number:** 794 <br>
> **Problem Name:** Valid Tic-Tac-Toe State <br>
> **Problem Link:** [https://leetcode.com/problems/valid-tic-tac-toe-state/](https://leetcode.com/problems/valid-tic-tac-toe-state/) <br>

    class Solution {
    public:
        bool hasThree(vector<string> &board, char c) {
        if(board[0][0] == c && board[0][1] == c && board[0][2] == c) {
            return true;
        }
        if(board[1][0] == c && board[1][1] == c && board[1][2] == c) {
            return true;
        }
        if(board[2][0] == c && board[2][1] == c && board[2][2] == c) {
            return true;
        }
        if(board[0][0] == c && board[1][0] == c && board[2][0] == c) {
            return true;
        }
        if(board[0][1] == c && board[1][1] == c && board[2][1] == c) {
            return true;
        }
        if(board[0][2] == c && board[1][2] == c && board[2][2] == c) {
            return true;
        }
        if(board[0][0] == c && board[1][1] == c && board[2][2] == c) {
            return true;
        }
        if(board[0][2] == c && board[1][1] == c && board[2][0] == c) {
            return true;
        }
        return false;
        }
        bool validTicTacToe(vector<string>& board) {
            int x = 0;
            int zeros = 0;

            for(int i=0;i<board.size();i++) {
                for(int j=0;j<board[i].size();j++) {
                    if(board[i][j] == 'X') {
                        x += 1;
                    }else if(board[i][j] == 'O') {
                        zeros += 1;
                    }
                }
            }
            
            if(x < zeros || x > zeros+1 ) {
                return false;
            }
            if(hasThree(board,'X') && hasThree(board,'O')) {
                return false;
            }
            if(hasThree(board,'X')) {
                if(x == zeros+1) {
                    return true;
                }else {
                    return false;
                }
            }
            if(hasThree(board,'O')) {
                if(x == zeros) {
                    return true;
                }else {
                    return false;
                }
            }
            return true;
        }
    };