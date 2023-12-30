class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n=words.size();
        map<char,int> m;
        for(auto x:words) {
            for(auto y:x) {
                m[y]++;
            }
        }
        for(auto x:m) {
            if(x.second % n ) {
                return false;
            }
        }
        return true;
    }
};
