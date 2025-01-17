> **Problem Number:** 1518 <br>
> **Problem Name:** Water Bottles <br>
> **Problem Link:** [https://leetcode.com/problems/water-bottles](https://leetcode.com/problems/water-bottles) <br>

    class Solution {
    public:
        int numWaterBottles(int numBottles, int numExchange) {
            int drunk = 0; // stores the number of bottles that have been drunk
            int empty = 0; // stores the number of empty bottles at a time

            bool flag = true;

            while(numBottles) {
                if(flag == true) {
                    drunk += numBottles;
                    empty += numBottles;
                    flag = false;
                } else {
                    numBottles = empty / numExchange;
                    empty = empty % numExchange;
                    flag = true;    
                }
            }
            return drunk;
        }
    };