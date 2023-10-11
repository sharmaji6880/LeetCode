class Solution {
public:
    bool checkRecord(string s) {
        int count=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='A') {
                count++;
            }
        }
        if(s.size()<3) {
            if(count < 2) {
                return true;
            }else {
                return false;
            }
        }
        bool flag=true;
        for(int i=0;i<=s.size()-3;i++) {
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L') {
                flag=false;
                break;
            }
        }
        if(count<2 && flag) {
            return true;
        }
        return false;
    }
};
