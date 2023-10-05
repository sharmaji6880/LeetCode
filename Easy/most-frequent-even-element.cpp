class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums) {
            if(x%2==0) {
                m[x]++;
            }
        }
        int Max=-1,first=-1;
        for(auto x:m) {
            if(x.second > Max) {
                Max=x.second;
                first=x.first;
            }else if(x.second == Max && x.first < first) {
                    Max=x.second;
                    first=x.first;
            }
        }
        return first;
    }
};
