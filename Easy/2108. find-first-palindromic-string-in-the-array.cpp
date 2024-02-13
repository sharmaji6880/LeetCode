class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size()/2;i++) {
            if(s[i]!=s[s.size()-1-i]) {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto x:words) {
            if(isPalindrome(x)) {
                return x;
            }
        }
        return "";
    }
};