// This is a Brute Force approach
// For larger inputs, it may result into TLE(Time Limit Exceeded)
class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) {
            return "";
        }
        if(t==s) {
            return s;
        }
        map<char,int> m1;
        for(auto x:t) {
            m1[x]++;
        }
        int minLen=INT_MAX;
        int left=0,right=s.size()-1;
        int flag=false;
        for(int i=0;i<s.size();i++) {
            map<char,int> copy = m1;
            map<char,int> m2;
            for(int j=i;j<s.size();j++) {
                if(copy.count(s[j]) && copy[s[j]]) {
                    m2[s[j]]++;
                    copy[s[j]]--;
                }
                if(m1==m2 && (j-i+1 < minLen)) {
                    minLen=j-i+1;
                    left=i;
                    right=j;
                    flag=true;
                    break;
                }
            }
        }
        if(!flag) {
            return "";
        }
        cout<<left<<endl<<right;
        return s.substr(left,right-left+1);
    }
};