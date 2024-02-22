class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) { // If there is only one person, he must be the judge
            return 1;
        }
        if(trust.empty()) { // If nobody trusts nobody, then nobody is the judge
            return -1;
        }
        map<int,vector<int>> m;
        for(int i=0;i<trust.size();i++) {
            if(m.count(trust[i][1])) {
                m[trust[i][1]].push_back(trust[i][0]);
            }else {
                m[trust[i][1]]={trust[i][0]};
            }
        }
        bool flag = false;
        int ans;
        for(auto x:m) {
            if(x.second.size() == n-1) {
                flag=true;
                ans=x.first;
                break;
            }
        }
        if(flag==false) {
            return -1;
        }
        for(int i=0;i<trust.size();i++) {
            if(trust[i][0]==ans) {
                return -1;
            }
        }
        return ans;
    }
};