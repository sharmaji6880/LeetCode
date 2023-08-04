class Solution {
public:
    static bool cmp(pair<int,int> &a, pair<int,int> &b) {
        return a.second < b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        
        for(auto x:nums) {
            m[x]++;
        }
        vector<pair<int,int>> a;
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();++it) {
            a.push_back(make_pair(it->first,it->second));
        }
        sort(a.begin(),a.end(),cmp);
        vector<int> ans;
        int n=a.size();
        for(int i=n-1;i>=n-k;--i) {
            ans.push_back(a[i].first);
        }
        return ans;
    }
};
