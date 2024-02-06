class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<char>> arr(n,vector<char>(0));
        for(int i=0;i<n;i++) {
            vector<char> v;
            for(int j=0;j<strs[i].size();j++) {
                v.push_back(strs[i][j]);
            }
            arr[i]=v;
        }
        for(auto &x:arr) {
            sort(x.begin(),x.end());
        }
        map<vector<char>,vector<int>> m;
        for(int i=0;i<arr.size();i++) {
            if(!m.count(arr[i])) {
                m[arr[i]]={i};
            }else {
                m[arr[i]].push_back(i);
            }
        }
        vector<vector<string>> ans;
        for(auto x:m) {
            vector<string> v;
            for(auto y:x.second) {
                v.push_back(strs[y]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};