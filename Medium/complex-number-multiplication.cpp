class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int n1,n2,n3,n4;
        for(int i=0;i<num1.size();i++) {
            if(num1[i]=='+') {
                n1=i;
            }else if(num1[i]=='i') {
                n2=i;
                break;
            }
        }
        for(int i=0;i<num2.size();i++) {
            if(num2[i]=='+') {
                n3=i;
            }else if(num2[i]=='i') {
                n4=i;
                break;
            }
        }
        int re1=stoi(num1.substr(0,n1));
        int im1=stoi(num1.substr(n1+1,n2-n1-1));
        int re2=stoi(num2.substr(0,n3));
        int im2=stoi(num2.substr(n3+1,n4-n3-1));

        int re=(re1*re2)-(im1*im2);
        int im=(re1*im2)+(re2*im1);
        string ans="";
        ans+=to_string(re);
        ans.push_back('+');
        ans+=to_string(im);
        ans.push_back('i');

        return ans;
        
    }
};
