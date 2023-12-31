class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=0;
        int flag=0;
        for(int i=0;i<s.size()-1;i++) {
            for(int j=i+1;j<s.size();j++) {
                if(s[i]==s[j] && j-i-1 >= ans) {
                    flag=1;
                    ans=j-i-1;
                }
            }
        }
        if(flag) {
            return ans;
        }
        return -1;
    }
};
