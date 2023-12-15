class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() < 10) {
            return {};
        }
        map<string,int> m;
        for(int i=0;i<=s.size()-10;i++) {
            m[s.substr(i,10)]++;
        }
        vector<string> ans;
        for(auto x:m) {
            if(x.second>1) {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
