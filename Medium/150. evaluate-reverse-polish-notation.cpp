class Solution {
public:
    bool isOperator(string s) {
        if(s=="+" || s=="-" || s=="/" || s=="*") {
            return true;
        }
        return false;
    }
    int func(int num1,int num2, string op) {
        if(op=="+") {
            return num1+num2;
        }else if(op=="-") {
            return num1-num2;
        }else if(op=="*") {
            return num1*num2;
        }else if(op=="/") {
            return num1/num2;
        }
        return -1;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int a,b;
        for(int i=0;i<tokens.size();i++) {
            if(!isOperator(tokens[i])) {
                st.push(stoi(tokens[i]));
            }else {
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                int result=func(a,b,tokens[i]);
                st.push(result);
            }
        }
        return st.top();
    }
};
