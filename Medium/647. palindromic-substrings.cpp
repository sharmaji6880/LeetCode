class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>> arr(n,vector<int>(n,0));
        int count=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n-i;j++) {
                if(i==0) {
                    arr[j][j+i]=1;
                    count++;
                }else if(i==1) {
                    if(s[j]==s[j+i]) {
                        arr[j][j+i]=1;
                        count++;
                    }
                }else {
                    if(s[j]==s[j+i] && arr[j+1][j+i-1]) {
                        arr[j][j+i]=1;
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
