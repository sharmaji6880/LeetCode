> **Problem Number:** 1122 <br>
> **Problem Name:** Relative Sort Array <br>
> **Problem Link:** [https://leetcode.com/problems/relative-sort-array/](https://leetcode.com/problems/relative-sort-array/) <br>

**Using HashMap** <br>

    class Solution {
    public:
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
            map<int,int> m;
            for(auto x:arr1) {
                m[x]++;
            }
            arr1 = {};
            for(auto x:arr2) {
                for(int i=0;i<m[x];i++) {
                    arr1.push_back(x);
                }
                m[x] = 0;
            }
            for(auto x:m) {
                for(int i=0;i<x.second;i++) {
                    arr1.push_back(x.first);
                }
            }
            return arr1;
        }
    };

**Using Custom Comparator**

    map<int,int> m;
    class Solution {
    public:
        static bool cmp(int &a, int &b) {
            if(m.count(a) && !m.count(b)) {
                return true;
            }else if(!m.count(a) && m.count(b)) {
                return false;
            }else if(!m.count(a) && !m.count(b)) {
                return a < b;
            }
            return m[a] < m[b];
        }
        vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
            m = {};
            for(int i=0;i<arr2.size();i++) {
                m[arr2[i]] = i;
            }
            for(auto x:m) {
                cout<<x.first<<" "<<x.second<<endl;
            }
            sort(arr1.begin(),arr1.end(),cmp);
            return arr1;
        }
    };