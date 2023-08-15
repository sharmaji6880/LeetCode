class Solution {
public:
    string intToRoman(int num) {
        string s=to_string(num);
        map<char,int> m = {
            {'1',1},
            {'2',2},
            {'3',3},
            {'4',4},
            {'5',5},
            {'6',6},
            {'7',7},
            {'8',8},
            {'9',9}
        };
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++) {
            int exp=n-i;
            int value=m[s[i]];
            if(exp==1) {
                if(value<4) {
                    for(int j=0;j<value;j++) {
                        ans.push_back('I');
                    }
                }
                else if(value==4) {
                    ans.push_back('I');
                    ans.push_back('V');
                }
                else if(value<9) {
                    ans.push_back('V');
                    for(int j=1;j<=value-5;j++) {
                        ans.push_back('I');
                    }
                }
                else {
                    ans.push_back('I');
                    ans.push_back('X');
                }
            }
            else if(exp==2) {
               if(value<4) {
                    for(int j=0;j<value;j++) {
                        ans.push_back('X');
                    }
                }
                else if(value==4) {
                    ans.push_back('X');
                    ans.push_back('L');
                }
                else if(value<9) {
                    ans.push_back('L');
                    for(int j=1;j<=value-5;j++) {
                        ans.push_back('X');
                    }
                }
                else {
                    ans.push_back('X');
                    ans.push_back('C');
                } 
            }
            else if(exp==3) {
               if(value<4) {
                    for(int j=0;j<value;j++) {
                        ans.push_back('C');
                    }
                }
                else if(value==4) {
                    ans.push_back('C');
                    ans.push_back('D');
                }
                else if(value<9) {
                    ans.push_back('D');
                    for(int j=1;j<=value-5;j++) {
                        ans.push_back('C');
                    }
                }
                else {
                    ans.push_back('C');
                    ans.push_back('M');
                } 
            }
            else {
                for(int i=0;i<value;i++) {
                    ans.push_back('M');
                }
            }
        }
        return ans;
    }
};
