class Solution {
public:
    bool isPowerOfTwo(int n) {
        double f=n;
        while(f>1) {
            f=f/2;
            cout<<f<<endl;
        }
        if(f==1) {
            return true;
        }
        return false;
    }
};
