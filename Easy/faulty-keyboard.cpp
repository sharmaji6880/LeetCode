class Solution {
public:
    void reverseString(string &s) {
        int n=s.size();
        for(int i=0;i<n/2;++i) {
            char temp=s[i];
            s[i]=s[n-1-i];
            s[n-1-i]=temp;
        }
    }
    string finalString(string s) {
        string str="";
        for(auto x:s) {
            if(x=='i') {
                reverseString(str);
            }
            else {
                str+=x;
            }
        }
        return str;
    }
    
};
