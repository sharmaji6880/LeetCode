//This is the Brute Force Approach
//For a larger input, it may result into TLE(Time Limit Exceeded)

class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n/2;i++) {
            if(s[i]!=s[n-1-i]) {
                return false;
            }
        }
        return true;
    }
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> ans;
        for(int i=0;i<words.size();i++) {
            for(int j=0;j<words.size();j++) {
                if(i==j) {
                    continue;
                }
                if(isPalindrome(words[i]+words[j])) {
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
