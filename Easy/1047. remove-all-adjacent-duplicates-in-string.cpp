class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;

        for(auto x:s) {
            if(st.empty() || st.top()!=x) {
                st.push(x);
                continue;
            }
            st.pop();
        }
        s="";
        while(!st.empty()) {
            s.push_back(st.top());
            st.pop();
        }
        int n = s.size();
        for(int i=0;i<n/2;i++) {
            char temp = s[i];
            s[i]=s[n-1-i];
            s[n-1-i]=temp;
        }
        return s;
    }
};