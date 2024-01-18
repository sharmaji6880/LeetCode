class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m,n;
        for(auto x:arr) {
            m[x]++;
        }
        for(auto x:m) {
            n[x.second]++;
        }
        for(auto x:n) {
            if(x.second!=1) {
                return false;
            }
        }
        return true;
    }
};
