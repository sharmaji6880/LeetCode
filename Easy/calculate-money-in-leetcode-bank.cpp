class Solution {
public:
    int totalMoney(int n) {
        long ans=0;
        int prev=0;
        int money=0;
        for(int i=1;i<=n;i++) {
            if(i%7==1) {
                money=prev+1;
                prev=money;
                ans+=money;
                continue;
            }
            money+=1;
            ans+=money;
        }
        return ans;
    }
};
