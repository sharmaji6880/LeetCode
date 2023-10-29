class Solution {
public:
    int addDigits(int num) {
        string str=to_string(num);
        while(str.size()!=1) {
            int sum=0;
            for(int i=0;i<(int)str.size();++i) {
                sum+=str[i]-48;
            }
            str=to_string(sum);
        }
        return str[0]-48;
    }
};
