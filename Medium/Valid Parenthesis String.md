> **Problem Number:** 678 <br>
> **Problem Name:** Valid Parenthesis String <br>
> **Problem Link:** [https://leetcode.com/problems/valid-parenthesis-string/](https://leetcode.com/problems/valid-parenthesis-string/) <br>

    class Solution {
    public:
        bool checkValidString(string s) {
            stack<int> st1,st2;
            for(int i=0;i<s.size();i++) {
                if(s[i]=='(') {
                    st1.push(i);
                }
                else if(s[i]==')') {
                    if(st1.size()) {
                        st1.pop();
                    }
                    else if(st2.size()) {
                        st2.pop();
                    }
                    else {
                        return false;
                    }
                }
                else {
                    st2.push(i);
                }
            }

            if(st1.empty()) {
                return true;
            }
            while(!st1.empty()) {
                if(st2.empty()) {
                    return false;
                }else if(st2.top() > st1.top()) {
                    st2.pop();
                    st1.pop();
                }else {
                    return false;
                }
            }
            if(st1.empty()) {
                return true;
            }
            return false;
            
        }
    };