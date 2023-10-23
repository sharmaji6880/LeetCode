class Solution {
public:
    bool isPowerOfFour(int n) {
        double d=n;
        while(d>1) {
            d/=4;
        }
        if(d==1) {
            return true;
        }
        return false;
    }
};
