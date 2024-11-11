> **Problem Number:** 3206 <br>
> **Problem Name:** Alternating Groups I <br>
> **Problem Link:** [https://leetcode.com/problems/alternating-groups-i](https://leetcode.com/problems/alternating-groups-i) <br>

    class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors) {
        int count = 0;
        int n = colors.size();
        for(int i = 0; i < colors.size(); ++i) {
                if(i == 0) {
                    if(colors[0] != colors[n-1] && colors[0] != colors[1]) {
                        count +=1;
                    }
                    continue;
                }
                if( colors[i] != colors[i-1] && colors[i] != colors[(i+1)%n] ) {
                    count += 1;
                }
        } 
        return count;
        }
    };