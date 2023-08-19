class Solution {
public:
    int hammingWeight(uint32_t n) {
       long num=(long)n;
       cout<<num;
       int count=0;
       while(num) {
           if(num%2) {
               count++;
           }
           num/=2;
       }
       return count;
    }
};
