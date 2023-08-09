class Solution {
public:
    static bool cmp(pair<char,int> &a, pair<char,int> &b) {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        for(auto i : mp){
            cout << i.first << ' ' << i.second << endl;
        }
        cout << endl;
        return "";
    }
};
