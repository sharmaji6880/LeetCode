class Solution {
public:
    string decodeAtIndex(string s, int k) {
       long size=0;
       for(auto x:s) {
           if(x-97>=0 && x-97<=25) {
               size++;
           }else {
               size*=x-'0';
           }
       }
       for(int i=s.size()-1;i>=0;i--) {
           k%=size;
           if(k==0 && s[i]-97>=0 && s[i]-97<=25) {
               return s.substr(i,1);
           }
           if(s[i]-97>=0 && s[i]-97<=25) {
               size--;
           }else {
               size/=s[i]-'0';
           }
       }
       return "";
       
    }
};
