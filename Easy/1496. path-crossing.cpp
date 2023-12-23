class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        set<pair<int,int>> s;
        s.insert({x,y});

        for(int i=0;i<path.size();i++) {
            if(path[i]=='N') {
                y++;
            }else if(path[i]=='S') {
                y--;
            }else if(path[i]=='E') {
                x++;
            }else {
                x--;
            }
            if(s.count({x,y})) {
                return true;
            }
            s.insert({x,y});
        }
        return false;
    }
};
