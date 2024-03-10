> **Problem Number:** 3074 <br>
> **Problem Name:** Apple Redistribution into Boxes <br>
> **Link:** [https://leetcode.com/problems/apple-redistribution-into-boxes/](https://leetcode.com/problems/apple-redistribution-into-boxes/) <br>

    class Solution {
    public:
        int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
            int sum = 0;
            for(auto x:apple) {
                sum+=x;
            }
            sort(capacity.begin(),capacity.end());
            reverse(capacity.begin(),capacity.end());
            
            for(int i=0;i<capacity.size();i++) {
                sum-=capacity[i];
                if(sum <= 0) {
                    return i+1;
                }
            }
            return -1;
        }
    };