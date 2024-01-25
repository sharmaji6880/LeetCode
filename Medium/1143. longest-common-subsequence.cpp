// Solution 1
// This is a recursive solution.
// It is not advised to use this approach as it can lead to TLE even for smaller inputs.
class Solution {
public:
    int lcs(int i,int j, string s1, string s2) {
        if(i==s1.size() || j==s2.size()) {
            return 0;
        }
        if(s1[i]==s2[j]) {
            return 1 + lcs(i+1,j+1,s1,s2);  
        }else {
            return max(lcs(i+1,j,s1,s2),lcs(i,j+1,s1,s2));
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        return lcs(0,0,text1,text2);
    }
};


// Solution 2
// This is a Dynamic Programming based approach.
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if(text1==text2) {
            return text1.size();
        }

        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,0));

        for(int i=1;i<=text1.size();i++) {
            for(int j=1;j<=text2.size();j++) {
                if(text1[i-1]==text2[j-1]) {
                    dp[i][j]=dp[i-1][j-1]+1;
                }else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[text1.size()][text2.size()];
    }
};
