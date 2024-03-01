class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;
        int n = s.size();
        for(auto x:s) {
            if(x=='1') {
                count++;
            }
        }
        if(count == 1) {
            for(int i=0;i<n;i++) {
                if(i==n-1) {
                    s[i]='1';
                }else {
                    s[i]='0';
                }
            }
            cout<<s;
            return s;
        }
        cout<<count<<endl;
        for(int i=0;i<count-1;i++) {
            s[i]='1';
        }
        for(int i=count-1;i<n-1;i++) {
            s[i]='0';
        }
        s[n-1]='1';
        return s;
    }
};