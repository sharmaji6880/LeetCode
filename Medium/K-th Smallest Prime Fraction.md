> **Problem Number:** 786 <br>
> **Problem Name:** K-th Smallest Prime Fraction <br>
> **Problem Link:** [https://leetcode.com/problems/k-th-smallest-prime-fraction/](https://leetcode.com/problems/k-th-smallest-prime-fraction/) <br>

    class Solution {
    public:
        vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
            map<double,pair<int,int>> m;
            set<double> s;
            int n = arr.size();

            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    s.insert(1.0*arr[i]/arr[j]);
                    m[1.0*arr[i]/arr[j]] = {i,j};
                }
            }
            set<double>::iterator it = s.begin();
            for(int i=1;i<k;i++) {
                it++;
            }
            int a = m[*it].first;
            int b = m[*it].second;
            return {arr[a],arr[b]};
        }
    };