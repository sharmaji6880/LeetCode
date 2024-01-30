class Solution {
public:
    bool isVowel(char c) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            return true;
        }
        return false;
    }
    int beautifulSubstrings(string s, int k) {
        int n=s.size();
        vector<vector<int>> vowels(n,vector<int>(n,0));
        for(int i=0;i<n;i++) {
            if(isVowel(s[i])) {
                vowels[i][i]=1;
            }
        }
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(isVowel(s[j])) {
                    vowels[i][j]=vowels[i][j-1]+1;
                }else {
                    vowels[i][j]=vowels[i][j-1];
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(vowels[i][j]==(j-i+1-vowels[i][j]) && vowels[i][j]*(j-i+1-vowels[i][j])%k==0) {
                    count++;
                }
            }
        }
        return count;

    }
};
