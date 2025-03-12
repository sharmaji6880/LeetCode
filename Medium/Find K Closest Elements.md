> **Problem Number:** 658 <br>
> **Problem Name:** Find K Closest Elements <br>
> **Problem Link:** [https://leetcode.com/problems/find-k-closest-elements/description/](https://leetcode.com/problems/find-k-closest-elements/description/) <br>

    class Solution {
    public:
        static bool cmp(pair<int,int> a, pair<int,int> b) {
            if(a.second < b.second ) return true;
            if(a.second > b.second ) return false;
            return a.first < b.first;
        }
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            vector<pair<int,int>> v;
            int n = arr.size();
            for(int i=0;i<n;i++) {
                v.push_back({arr[i],abs(x-arr[i])});
            }
            sort(v.begin(),v.end(),cmp);
            vector<int> ans;
            for(int i=0;i<k;i++) {
                ans.push_back(v[i].first);
            }
            sort(ans.begin(),ans.end());
            return ans;

        }
    };