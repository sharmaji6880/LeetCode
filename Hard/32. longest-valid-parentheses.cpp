
// Solution without using Stack
class Solution {
public:
    
    int longestValidParentheses(string s) {
        int open = 0;
        int close = 0;
        int Max = 0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='(') {
                open++;
            }else {
                close++;
            }
            if(open == close) {
                Max = max(Max,open*2);
            }
            if(close > open ) {
                open = 0;
                close = 0;
            }
        }
        open = 0;
        close = 0;
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i]=='(') {
                open++;
            }else {
                close++;
            }
            if(open == close) {
                Max = max(Max, open*2);
            }
            if(open > close ) {
                close = 0;
                open = 0;
            }
        }
        return Max;

    }
};

// Solution using Stack
class Solution {
public:
    
    int longestValidParentheses(string s) {
        int len = 0;
        int n = s.size();

        stack<char> character;
        stack<int> index;
        index.push(-1);

        for(int i=0;i<n;i++) {
            if(s[i]=='(') {
                character.push(s[i]);
                index.push(i);
            }else {
                if(character.empty()) {
                    index.push(i);
                    continue;
                }
                character.pop();
                index.pop();
                if(i-index.top() > len) {
                    len=i-index.top();
                }

            }
        }
        return len;

    }
};