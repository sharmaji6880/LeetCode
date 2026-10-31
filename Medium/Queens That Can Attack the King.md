**Problem No.:** 1222  
**Problem Name:** Queens That Can Attack the King  
**Problem Link:** [LeetCode 1222 - Queens That Can Attack the King](https://leetcode.com/problems/queens-that-can-attack-the-king/description/)

<!--### Brute Force Method-->

```java
class Solution {

    public List<List<Integer>> queensAttacktheKing(int[][] queens, int[] king) {

        int[][] board = new int[8][8];
        for(int i=0;i<queens.length;i++) {
            board[queens[i][0]][queens[i][1]] = 1;
        }
        board[king[0]][king[1]] = 100;



        List<List<Integer>> output = new ArrayList<>();
        int kx = king[0], ky = king[1];
        // Right Direction
        for(int p=ky;p<8;p++) {
            if(board[kx][p] == 1) {
                output.add(List.of(kx,p));
                break;
            }
        }
        // Left Direction
        for(int p=ky;p>=0;p--) {
            if(board[kx][p] == 1) {
                output.add(List.of(kx,p));
                break;
            }
        }
        // Up Direction
        for(int p=kx;p>=0;p--) {
            if(board[p][ky] == 1) {
                output.add(List.of(p,ky));
                break;
            }
        }
        // Down Direction
        for(int p=kx;p<8;p++) {
            if(board[p][ky] == 1) {
                output.add(List.of(p,ky));
                break;
            }
        }
        int r,c;
        // Top Right Direction
        r = kx - 1; c = ky + 1;
        while(r>=0 && c<8) {
            if(board[r][c] == 1) {
                output.add(List.of(r,c));
                break;
            }
            r--;c++;
        }

        // Top Left Direction
        r = kx - 1; c = ky - 1;
        while(r>=0 && c>=0) {
            if(board[r][c] == 1) {
                output.add(List.of(r,c));
                break;
            }
            r--;c--;
        }

        // Bottom Right Direction
        r = kx + 1; c = ky + 1;
        while(r<8 && c<8) {
            if(board[r][c] == 1) {
                output.add(List.of(r,c));
                break;
            }
            r++;c++;
        }

        // Bottom Left Direction
        r = kx + 1; c = ky - 1;
        while(r<8 && c>=0) {
            if(board[r][c] == 1) {
                output.add(List.of(r,c));
                break;
            }
            r++;c--;
        }
        return output;
        
    }
}
```
