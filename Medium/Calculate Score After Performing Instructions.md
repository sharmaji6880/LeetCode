> **Problem No.:** 3522  
> **Problem Name:** Calculate Score After Performing Instructions  
> **Problem Link:** [https://leetcode.com/problems/calculate-score-after-performing-instructions](https://leetcode.com/problems/calculate-score-after-performing-instructions)  


    class Solution {
    public:
        long long calculateScore(vector<string>& instructions, vector<int>& values) {
            long long score = 0;
            set<int> visited;
            int i = 0, n = instructions.size();
            while(true) {
                if(visited.count(i) || i < 0 || i >= n) break;
                visited.insert(i);
                if(instructions[i] == "add") {
                    score += (long long) values[i];
                    i++;
                }else if(instructions[i] == "jump") {
                    i += values[i];
                }
    
            }
            return score;
        }
    };