> **Problem No.:** 79  
> **Problem Name:** Word Search  
> **Problem Link:** [https://leetcode.com/problems/word-search/description/](https://leetcode.com/problems/word-search/description/)  


    class Solution {
        Set<List<Integer>> visited;
        char[][] board;
        int m,n;
        String target;
        public boolean dfs(int i, int j, int c) {
            if(c==target.length()) return true;
            if(i<0 || j < 0 || i>=m || j>= n || visited.contains(List.of(i,j)) || board[i][j] != target.charAt(c)) return false;
            visited.add(List.of(i,j));
            boolean result = dfs(i,j-1,c+1) ||
                             dfs(i,j+1,c+1) ||
                             dfs(i-1,j,c+1) ||
                             dfs(i+1,j,c+1);
            visited.remove(List.of(i,j));
            return result;
    
        }
        public boolean exist(char[][] board, String word) {
            this.board = board;
            this.m = board.length;
            this.n = board[0].length;
            this.target = word;
            this.visited = new HashSet<>();
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    if(dfs(i,j,0)) return true;
                }
            }
            return false;
            
        }
    }