class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> m1,m2;

        for(auto x:s) {
            m1[x]++;
        }
        for(auto x:t) {
            m2[x]++;
        }

        int ans=0;

        for(auto x:m2) {
            if(m1.count(x.first) == 0) {
                ans+=x.second;
            }else if(x.second > m1[x.first]) {
                ans+= x.second - m1[x.first];
            }
        }

        return ans;
    }
};
