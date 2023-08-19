class Solution {
public:
    vector<int> evenOddBit(int n) {
        int count=0;
        int odd=0,even=0;
        while(n) {
            if(n%2 && count%2) {
                odd++;
            }
            else if(n%2 && count%2==0) {
                even++;
            }
            n/=2;
            count++;
        }
        return {even,odd};
    }
};
