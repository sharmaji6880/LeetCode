class Solution {
public:

    static bool cmp(pair<char,int> &p1, pair<char,int> &p2){
        return p1.second > p2.second;
    }
    string frequencySort(string s) {
        
        map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        vector<pair<char,int>> vp;
        for(auto i : mp){
            vp.push_back(i);
        }
        sort(vp.begin(), vp.end(), cmp);
        string ans;
        for(auto i : vp){
            for(int j=0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};