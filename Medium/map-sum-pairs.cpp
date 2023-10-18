class MapSum {
public:
    map<string,int> m;
    MapSum() {
        m={};
    }
    bool isPrefix(string s1,string s2) {
        if(s1.size() > s2.size()) {
            return false;
        }else if(s1==s2) {
            return true;
        }else {
            for(int i=0;i<s1.size();i++) {
                if(s1[i]!=s2[i]) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
    
    void insert(string key, int val) {
        m[key]=val;
    }
    
    int sum(string prefix) {
        int sum=0;
        for(auto x:m) {
            if(isPrefix(prefix,x.first)) {
                sum+=x.second;
            }
        }
        return sum;
    }
};
