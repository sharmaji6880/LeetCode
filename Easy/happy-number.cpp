class Solution {
public:
    bool isHappy(int n) {
        string s;
        while(n>10) {
            s=to_string(n);
            n=0;
            for(int i=0;i<(int)s.size();++i) {
                n+=pow(s[i]-48,2);
            }
        }
        if(n==1  || n==7 ||n==10) {
            return true;
        }
        return false;
    }
};
