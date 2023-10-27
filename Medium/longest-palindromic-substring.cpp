class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.length();
       if(n==1) {
           return s;
       }
       int arr[n][n];
       for(int i=0;i<n;i++) {
           for(int j=0;j<n;j++) {
               arr[i][j]=0;
           }
       }
       for(int i=0;i<n;i++) {
           if(i==0) {
               for(int j=0;j<n-i;j++) {
                   arr[j][j]=1;
               }
               continue;
           }
           if(i==1) {
               for(int j=0;j<n-i;j++) {
                   if(s[j]==s[j+1]) {
                       arr[j][j+1]=1;
                   }
               }
               continue;
           }
           for(int j=0;j<n-i;j++) {
               if(s[j]==s[j+i] && arr[j+1][j+i-1]) {
                   arr[j][j+i]=1;
               }
           }
           
       }
       
       int maxLen=0;
       int x=0,y=0;
       for(int i=0;i<n-1;i++) {
           for(int j=i+1;j<n;j++) {
               if(arr[i][j] && j-i+1>maxLen) {
                   maxLen=j-i+1;
                   x=i;
                   y=j;
               }
           }
       }

       return s.substr(x,y-x+1);
    }
};
