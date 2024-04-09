> **Problem Number:** 2073 <br>
> **Problem Name:** Time Needed to Buy Tickets <br>
> **Problem Link:** [https://leetcode.com/problems/time-needed-to-buy-tickets/](https://leetcode.com/problems/time-needed-to-buy-tickets/) <br>

    class Solution {
    public:
        int timeRequiredToBuy(vector<int>& tickets, int k) {
            int n = tickets.size();
            int i=0;
            int timeTaken = 0;
            while(true) {
                if(tickets[i]==0) {
                    i = (i+1)%n;
                    continue;
                }
                tickets[i]-=1;
                timeTaken+=1;
                if(tickets[i]==0 && i==k) {
                    return timeTaken;
                }
                i = (i+1)%n;
            }
            return -1;
        }
    };