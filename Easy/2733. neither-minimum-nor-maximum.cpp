class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int Min=101;
        int Max=0;
        for(auto x:nums) {
            if(x>Max) {
                Max=x;
            }
            if(x<Min) {
                Min=x;
            }
        }
        for(auto x:nums) {
            if(x!=Min && x!=Max) {
                return x;
            }
        }
        return -1;
    }
};
