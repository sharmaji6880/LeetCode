class TimeMap {
public:
    map<pair<string,int>,string> m;
    TimeMap() {
        m={};
    }
    
    void set(string key, string value, int timestamp) {
        m[{key,timestamp}]=value;
    }
    
    string get(string key, int timestamp) {
        if(m.count({key,timestamp})) {
            return m[{key,timestamp}];
        }

        map<pair<string,int>,string>::iterator it=--m.end();
        while(it!=m.begin()) {
            if(it->first.first==key && it->first.second<=timestamp) {
                return it->second;
            }
            --it;
        }
        if(it->first.first==key && it->first.second<=timestamp) {
            return it->second;
        }
        return "";
        
    }

};
