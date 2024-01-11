class Solution {
public:
    int totalMoney(int n) {
        long ans=1;
        int prev=1;
        for(int i=2;i<=n;i++) {
            if(i%7==1) {
                prev-=5;
                ans+=prev;
                continue;
            }
            prev+=1;
            ans+=prev;
        }
        return ans;
    }
};
