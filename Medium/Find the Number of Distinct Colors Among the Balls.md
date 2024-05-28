> **Problem Number:** 3160 <br>
> **Problem Name:** Find the Number of Distinct Colors Among the Balls <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/](https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/) <br>

    class Solution {
    public:
        vector<int> queryResults(int limit, vector<vector<int>>& queries) {
            map<int,int> ballToColor;
            map<int,set<int>> colorToBalls;

            vector<int> answer;

            for(int i=0;i<queries.size();i++) {
                int ball = queries[i][0];
                int color = queries[i][1];

                if(ballToColor.find(ball) != ballToColor.end()) {
                    colorToBalls[ballToColor[ball]].erase(ball);
                    if(colorToBalls[ballToColor[ball]].empty()) {
                        colorToBalls.erase(ballToColor[ball]);
                    }
                    if(colorToBalls.find(color) != colorToBalls.end()) {
                        colorToBalls[color].insert(ball);
                    }else {
                        colorToBalls[color] = {ball};
                    }
                    ballToColor[ball] = color;
                }
                else {
                    ballToColor[ball] = color;

                    if(colorToBalls.find(color) != colorToBalls.end()) {
                        colorToBalls[color].insert(ball);
                    }else {
                        colorToBalls[color] = {ball};
                    }
                }
                answer.push_back(colorToBalls.size());
            }
            return answer;
        }
    };