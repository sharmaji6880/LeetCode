> **Problem Number:** 2037 <br>
> **Problem Name:** Minimum Number of Moves to Seat Everyone <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/](https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/) <br>

    class Solution {
    public:
        int minMovesToSeat(vector<int>& seats, vector<int>& students) {
            sort(seats.begin(),seats.end());
            sort(students.begin(),students.end());

            int n = seats.size();

            int moves = 0;
            for(int i=0;i<n;i++) {
                moves += abs(students[i] - seats[i]);
            }
            return moves;
        }
    };