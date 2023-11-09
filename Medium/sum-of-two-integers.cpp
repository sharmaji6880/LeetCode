class Solution {
public:
    int getSum(int a, int b) {
        int count=0;
        if(b<0) {
           while(count<abs(b)) {
             a--;
             count++;
           } 
           return a;
        }
        while(count<b) {
            a++;
            count++;
        }
        return a;
    }
};
