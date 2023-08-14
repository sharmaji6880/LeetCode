lass Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        for(auto x:candyType) {
            s.insert(x);
        }
        
        if(candyType.size()/2<=s.size()) {
            return candyType.size()/2;
        }
        return s.size();
    }
};
