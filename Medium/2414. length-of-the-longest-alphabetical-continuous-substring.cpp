// This is a 2-pointer based approach
class Solution {
public:
    int longestContinuousSubstring(string s) {
        if(s.length()==1) {
            return 1;
        }
        int i=0,j=1;
        int Max=0;
        while(j<s.size()) {
            if(s[j]==s[j-1]+1) {
                j++;
            }else {
                if(j-i > Max) {
                    Max=j-i;
                }
                i=j;
                j++;
            }
            if(j-i > Max) {
                Max=j-i;
            }
        }
        return Max;
    }
};

// This approach makes use of Stack Data Structure
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int Max=0;
        stack<int> st;

        for(auto x:s) {
            if(st.empty()) {
                st.push(x);
            }else if(x==st.top()+1) {
                st.push(x);
            }else {
                if(st.size() > Max) {
                    Max=st.size();
                }
                st={};
                st.push(x);
            }
        }
        if(st.size() > Max) {
            Max=st.size();
        }
        return Max;
    }
};
