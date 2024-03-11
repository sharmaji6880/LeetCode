> **Problem Number:** 8 <br>
> **Problem Name:** String to Integer (atoi) <br>
> **Link:** [https://leetcode.com/problems/string-to-integer-atoi/](https://leetcode.com/problems/string-to-integer-atoi/) <br>

    class Solution {
    public:
        bool isDigit(char c) {
            if(c-'0'>=0 && c-'0'<=9) {
                return true;
            }
            return false;
        }
        bool isAlphabet(char c) {
            if( (c-97>=0 && c-97<=25) || (c-65>=0 && c-65<=25) ) {
                return true;
            }
            return false;
        }
        int myAtoi(string s) {
            bool plusAppears=false;
            bool minusAppears=false;
            queue<char> q;

            int index = 0;
            while(index < s.size() && !isAlphabet(s[index])) {
                if(s[index]=='-') {
                    if(q.size() || plusAppears || minusAppears) {
                    break;
                    }
                    minusAppears = true;
                }else if(isDigit(s[index])) {
                    q.push(s[index]);
                }else if(s[index]=='+') {
                    if(q.size() || plusAppears || minusAppears) {
                        break;
                    }
                    plusAppears = true;
                }else if(s[index]=='.') {
                    break;
                }else if(s[index]==' ') {
                    if(q.size() || plusAppears || minusAppears) {
                        break;
                    }
                }
                index++;
            }
            if(q.empty() || (plusAppears && minusAppears)) {
                return 0;
            }
            s = "";
            while(!q.empty()) {
                s.push_back(q.front());
                q.pop();
            }
            cout<<s;
            index = -1;
            for(int i=0;i<s.size();i++) {
                if(s[i]!='0') {
                    index = i;
                    break;
                }
            }
            if(index!=-1) {
                s=s.substr(index,s.size()-index+1);
            }else {
                return 0;
            }
            
            if(s.size() > 10) {
                if(minusAppears) {
                    return INT_MIN;
                }
                return INT_MAX;
            }
            long long ans = stol(s);

            if(minusAppears) {
            if(-ans < INT_MIN) {
                return INT_MIN;
            }else {
                return -ans;
            }
            }
            if(ans > INT_MAX) {
                return INT_MAX;
            }
            return ans;

        }
    };