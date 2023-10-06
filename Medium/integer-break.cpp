class Solution {
public:

    int integerBreak(int n) {
        if(n==2) {
            return 1;
        }else if(n==3) {
            return 2;
        }
        int num=n/3;
        if(n%3==0) {
            return pow(3,num);
        }else if(n%3==1) {
            return pow(3,num-1) * 4;
        }else {
            return pow(3,num) * 2;
        }
        return 0;
    }
};
