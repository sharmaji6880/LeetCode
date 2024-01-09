class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.length()==1) {
            return 1;
        }
        int i=0,j=1;
        int Max=0;
        while(j<s.size()) {
            if(s[j]==s[j-1]+1) {
                j++;
            }else {
                if(j-i > Max) {
                    Max=j-i;
                }
                i=j;
                j++;
            }
            if(j-i > Max) {
                Max=j-i;
            }
        }
        return Max;
    }
};
