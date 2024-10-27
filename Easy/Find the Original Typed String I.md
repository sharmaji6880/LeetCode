> **Problem Number:** 3330 <br>
> **Problem Name:** Find the Original Typed String I <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-original-typed-string-i](https://leetcode.com/problems/find-the-original-typed-string-i) <br>

    class Solution {
    public:
        int possibleStringCount(string word) {
            stack<char> st;
            int count = 1;
            for(auto x:word) {
                if(st.empty() || st.top() != x) {
                    st.push(x);
                }else {
                    count += 1;
                }
            }
            return count;
        }
    };