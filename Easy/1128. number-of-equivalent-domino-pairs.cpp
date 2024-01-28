class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {

        map<pair<int,int>,int> m;

        int ans = 0;
        for(int i=0;i<dominoes.size();i++) {
            int a=dominoes[i][0];
            int b=dominoes[i][1];
            if(i==0) {
                m[{a,b}]=1;
            }else {
                if(a==b) {
                    ans+=m[{a,b}];
                }else {
                    ans=ans+m[{a,b}]+m[{b,a}];
                }
                m[{a,b}]++;
            }
        }
        return ans;
    }
};
