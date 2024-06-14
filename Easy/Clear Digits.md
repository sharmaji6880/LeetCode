> **Problem Number:** 3174 <br>
> **Problem Name:** Clear Digits <br>
> **Problem Link:** [https://leetcode.com/problems/clear-digits/](https://leetcode.com/problems/clear-digits/) <br>

    class Solution {
    public:
        bool isDigit(char c) {
            if(c-'0' >=0 && c-'0'<=9) {
                return true;
            }
            return false;
        }
        string clearDigits(string s) {
            stack<char> st;
            for(int i=0;i<s.size();i++) {
                if(!isDigit(s[i])) {
                    st.push(s[i]);
                }else {
                    st.pop();
                }
            }
            s = "";
            while(!st.empty()) {
                s+=st.top();
                st.pop();
            }
            int n = s.size();
            for(int i=0;i<n/2;i++) {
                char temp = s[i];
                s[i] = s[n-1-i];
                s[n-1-i] = temp;
            }
            return s;
        }
    };