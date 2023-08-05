class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> s,m;
        for(auto x:paths){
            s.insert(x[0]);
            m.insert(x[0]);
            s.insert(x[1]);
        }
        for(auto x:s){
            if(m.count(x)==0){
                return x;
            }
        }
        return "";
    }
};
