// This is a brute force approach
// For large inputs, it will result into TLE
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == 0) {
            return 0;
        }
        long ans=left;
        for(long i=left+1;i<=right;i++) {
            ans=ans&i;
        }
        return ans;
    }
};