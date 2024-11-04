> **Problem Number:** 443 <br>
> **Problem Name:** String Compression <br>
> **Problem Link:** [https://leetcode.com/problems/string-compression](https://leetcode.com/problems/string-compression) <br>

**Using O(n) Space:**

    class Solution {
    public:
        int compress(vector<char>& chars) {
        int n = chars.size();
        if( n == 1 ) {
            return 1;
        }
        stack<char> st;
        vector<char> ans;
        string s;

        for(int i=0;i<n;i++) {
            if(st.empty()) {
                st.push(chars[i]);
                continue;
            }
            if(st.top() == chars[i]) {
                st.push(chars[i]);
            }else {
                ans.push_back(st.top());
                if(st.size() == 1) {
                    // Eat 5 Star, Do Nothing
                }
                else if(st.size() < 10) {
                    ans.push_back(st.size() + '0');
                }else {
                    s = to_string(st.size());
                    for(auto x:s) {
                        ans.push_back(x);
                    }
                }
                st = {};
                st.push(chars[i]);
            }
            if( i == n - 1 ) {
                ans.push_back(st.top());
                if(st.size() == 1) {
                    // Eat 5 Star, Do Nothing
                }else if(st.size() < 10) {
                    ans.push_back(st.size() + '0');
                }else {
                    s = to_string(st.size());
                    for(auto x:s) {
                        ans.push_back(x);
                    }
                }
            }
        }
        chars = ans;
        return chars.size();
        }
    };