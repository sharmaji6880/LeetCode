class MyHashMap {
public:
    set<pair<int,int>> hm;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int flag=0;
        for(auto &x:hm) {
            if(x.first==key) {
                hm.erase(x);
                hm.insert({key,value});
                flag=1;
                break;
            }
        }
        if(!flag) {
            hm.insert({key,value});
        }
    }
    
    int get(int key) {
        for(auto x:hm) {
            if(x.first==key) {
                return x.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto x:hm) {
            if(x.first==key) {
                hm.erase(x);
            }
        }
    }
};
