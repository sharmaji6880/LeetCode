class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string s="";
        while(n) {
            if(n%2) {
                s.push_back('1');
            }else {
                s.push_back('0');
            }
            n/=2;
        }
        int size=s.size();
        for(int i=1;i<=32-size;i++) {
            s.push_back('0');
        }
        long num=0;
        size=s.size();
        for(int i=0;i<size;i++) {
            if(s[i]=='1') {
                num+=pow(2,size-1-i);
            }
        }
        cout<<s;
        return num;
    }
};
