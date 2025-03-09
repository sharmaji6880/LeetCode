> **Problem Number:** 2379 <br>
> **Problem Name:** Minimum Recolors to Get K Consecutive Black Blocks <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/](https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/) <br>

    class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.size();
            vector<int> pSum(n,0);
            for(int i=0;i<n;i++) {
                pSum[i] = (i==0? 0:pSum[i-1]) + (blocks[i] == 'B');
            }
            int minMoves = INT_MAX, moves;
            for(int i=k-1;i<n;i++) {
                moves = k - ( pSum[i] - ( i == k-1? 0:pSum[i-k] ) );
                minMoves = min(moves,minMoves);
            }
            return minMoves;
        }
    };