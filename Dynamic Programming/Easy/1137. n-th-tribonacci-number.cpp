class Solution {
public:
    map<int,int> m;
    int tribonacci(int n) {
        if(n==0) {
            return 0;
        }
        if(n<=2) {
            return 1;
        }
        int x=m.count(n-3)?m[n-3]:tribonacci(n-3);
        int y=m.count(n-2)?m[n-2]:tribonacci(n-2);
        int z=m.count(n-1)?m[n-1]:tribonacci(n-1);
        m[n-3]=x;
        m[n-2]=y;
        m[n-1]=z;

        return x+y+z;
    }
};
