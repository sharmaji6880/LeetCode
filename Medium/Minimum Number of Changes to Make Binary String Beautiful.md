> **Problem Number:** 2914 <br>
> **Problem Name:** Minimum Number of Changes to Make Binary String Beautiful <br>
> **Problem Link:** [https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful](https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful) <br>

    class Solution {
    public:
        int minChanges(string s) {
            stack<char> st;
            int n = s.size();
            int count = 0;

            for(int i=0;i<n;i++) {
                if(st.empty()) {
                    st.push(s[i]);
                    continue;
                }
                if(st.top() == s[i]) {
                    st.push(s[i]);
                }else {
                    if(st.size() % 2 == 0 ) {
                        st = {};
                        st.push(s[i]);
                    }else {
                        count += 1;
                        st = {};
                    }
                }
            }
            return count;
        }
    };