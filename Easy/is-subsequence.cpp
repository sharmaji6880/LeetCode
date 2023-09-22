class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) {
            return true;
        }
        stack<char> st;
        for(auto x:s) {
            st.push(x);
        }
        for(int i=t.size()-1;i>=0;i--) {
            if(!st.empty() && t[i]==st.top()) {
                st.pop();
            }
        }
        if(st.empty()) {
            return true;
        }
        return false;
    }
};
