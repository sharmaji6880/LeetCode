class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> wins,losses;

        for(auto x:matches) {
            wins[x[0]]++;
            losses[x[1]]++;
        }
        set<int> s;
        vector<int> v;

        for(auto x:wins) {
            if(losses.count(x.first)==0) {
                s.insert(x.first);
            }
        }

        vector<vector<int>> ans;

        for(auto x:s) {
            v.push_back(x);
        }
        ans.push_back(v);
        s={};
        v={};

        for(auto x:losses) {
            if(x.second == 1) {
                s.insert(x.first);
            }
        }
        for(auto x:s) {
            v.push_back(x);
        }
        ans.push_back(v);

        return ans;
    }
};
