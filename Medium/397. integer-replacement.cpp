class Solution {
public:

    int integerReplacement(int n) {
        if(n==1) {
            return 0;
        }else if(n%2==0) {
            n/=2;
            return 1 +integerReplacement(n);
        }else if(n==INT_MAX) {
            return integerReplacement(n-1);
        }
        else {
            return 1+min(integerReplacement(n-1),integerReplacement(n+1));
        }
    }
};
