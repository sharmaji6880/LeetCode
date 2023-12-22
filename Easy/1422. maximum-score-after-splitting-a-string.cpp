class Solution {
public:
    int maxScore(string s) {
        int ones=0;
        for(auto x:s) {
            if(x=='1') {
                ones++;
            }
        }
        vector<int> prefixSum(s.size(),0);
        for(int i=0;i<s.size();i++) {
            if(i==0) {
                if(s[i]=='1') {
                    prefixSum[i]=1;
                }else {
                    prefixSum[i]=0;
                }
                continue;
            }
            prefixSum[i]=prefixSum[i-1]+(s[i]=='1'?1:0);
        }
        int maxScore=0;
        int zeroes=0;


        for(int i=0;i<s.size()-1;i++) {
            if(s[i]=='0') {
                zeroes++;
            }
            if(zeroes+ones-prefixSum[i] > maxScore) {
                maxScore=zeroes+ones-prefixSum[i];
            }
        }
        
        return maxScore;
    }
};
