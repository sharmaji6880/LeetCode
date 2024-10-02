> **Problem Number:** 1331 <br>
> **Problem Name:** Rank Transform of an Array <br>
> **Problem Link:** [https://leetcode.com/problems/rank-transform-of-an-array/](https://leetcode.com/problems/rank-transform-of-an-array/) <br>

    class Solution {
    public:
        vector<int> arrayRankTransform(vector<int>& arr) {
            vector<int> arrCopy = arr;
            sort(arrCopy.begin(),arrCopy.end());

            
            map<int,int> numToRankMapping;

            int prevRank;
            for(int i=0;i<arrCopy.size();i++) {
                if( i == 0 ) {
                    numToRankMapping[arrCopy[i]] = 1;
                    continue;
                }

                prevRank =  ( *(--numToRankMapping.end()) ).second;
                if( numToRankMapping.find(arrCopy[i]) == numToRankMapping.end() ) {
                    numToRankMapping[arrCopy[i]] = prevRank + 1;
                } else {
                    numToRankMapping[arrCopy[i]] = prevRank;
                }

            }
            for(auto &x:arr) {
                x = numToRankMapping[x];
            }
            return arr;
        }
    };