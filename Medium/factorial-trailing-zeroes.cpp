class Solution {
public:
    int trailingZeroes(int n) {
        int count_2=0,count_5=0;
        for(int i=2;i<=n;i++) {
            int count=i;
            while(count%2==0) {
                count/=2;
                count_2++;
            }
            while(count%5==0) {
                count/=5;
                count_5++;
            }
        }
        return min(count_2,count_5);
    }
};
