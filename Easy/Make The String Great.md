> **Problem Numnber:** 1544 <br>
> **Problem Name:** Make The String Great <br>
> **Problem Link:** [https://leetcode.com/problems/make-the-string-great/](https://leetcode.com/problems/make-the-string-great/) <br>

    class Solution {
    public:
        string makeGood(string s) {
            stack<char> st;
            int n = s.size();
            for(int i=0;i<n;i++) {
                if(st.empty()) {
                    st.push(s[i]);
                    continue;
                }
                if( abs(st.top()-s[i]) == 32 ) {
                    st.pop();
                }
                else {
                    st.push(s[i]);
                }
            }
            s="";
            while(!st.empty()) {
                s.push_back(st.top());
                st.pop();
            }
            n = s.size();
            for(int i=0;i<n/2;i++) {
                char temp = s[i];
                s[i] = s[n-1-i];
                s[n-1-i] = temp;
            }
            return s;
        }
    };