> **Problem Number:** 1249 <br>
> **Problem Name:**  Minimum Remove to Make Valid Parentheses <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/) <br>

    class Solution {
    public:
        string minRemoveToMakeValid(string s) {
            set<int> indices;
            stack<int> st;
            for(int i=0;i<s.size();i++) {
                if(s[i]!='(' && s[i]!=')') {
                    continue;
                }
                if(s[i]==')') {
                    if(st.empty()) {
                        indices.insert(i);
                    }else {
                        st.pop();
                    }
                }
                else if(s[i]=='(') {
                    st.push(i);
                }
            }
            while(!st.empty()) {
                indices.insert(st.top());
                st.pop();
            }
            string str = "";
            for(int i=0;i<s.size();i++) {
                if(indices.count(i)) {
                    continue;
                }
                str.push_back(s[i]);
            }
            return str;
        }
    };