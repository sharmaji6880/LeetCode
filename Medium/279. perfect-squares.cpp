// This solution is based on the Lagrange's Four Square Theorem
// Lagrange's Four Square Theorem states that every natural number
// can be expressed as the sum of the squares of four non-negative integers
// i.e, every integer can be expressed as the sum of four perfect square numbers
class Solution {
public:
    int numSquares(int n) {
       set<int> s;
       for(int i=1;i<=sqrt(n);i++) {
           s.insert(i*i);
       }
       if(s.count(n)) {
           return 1;
       }
       for(auto x:s) {
           for(auto y:s) {
               if(x+y == n) {
                   return 2;
               }
           }
       }
       for(auto x:s) {
           for(auto y:s) {
               for(auto z:s) {
                   if(x+y+z == n) {
                       return 3;
                   }
               }
           }
       }
       return 4;

    }
};