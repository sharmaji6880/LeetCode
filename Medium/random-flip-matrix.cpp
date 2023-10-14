class Solution {
public:
    int m,n;
    set<pair<int,int>> s;
    Solution(int m, int n) {
        this->m=m;
        this->n=n;
    }
    
    vector<int> flip() {
        int x=rand()%m;
        int y=rand()%n;
        while(s.count({x,y})) {
            x=rand()%m;
            y=rand()%n;
        }
        s.insert({x,y});
        return {x,y};

    }
    
    void reset() {
       s.clear();
    }
};
