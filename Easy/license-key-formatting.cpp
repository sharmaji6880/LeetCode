class Solution {
public:
    string licenseKeyFormatting(string &s, int k) {
        int count=0;
        for(auto x:s) {
            if(x!='-') {
                count++;
            }
        }
        for(auto &x:s) {
            if(x-97>=0 && x-97<=25) {
                x=(char)(x-32);
            }
        }
        if(count && count<k) {
            return s;
        }
        string str="";
        for(auto x:s) {
            if(x!='-') {
                str+=x;
            }
        }
        s="";
        if(count%k==0) {
            int cnt=0;
            for(int i=0;i<(int)str.size();i++) {
                s+=str[i];
                cnt++;
                if(cnt%k==0 && i!=(int)str.size()-1) {
                    s+='-';
                }
            }
        }
        else {
            int first=count%k;
            for(int i=0;i<first;i++) {
                s+=str[i];
            }
            s+='-';
            int cnt=0;
            for(int i=first;i<(int)str.size();i++) {
                s+=str[i];
                cnt++;
                if(cnt%k==0 && i!=(int)str.size()-1) {
                    s+='-';
                }
            }
        }
        return s;

    }
};
