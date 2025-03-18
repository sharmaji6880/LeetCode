> **Problem No.:** 1358  
> **Problem Name:** Number of Substrings Containing All Three Characters  
> **Problem Link:** [https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/)  


    class Solution {
    public:
        int binarySearch(vector<vector<int>> &pSum, int i) {
            int l = i, r = pSum.size()-1, mid, index = -1;
            if(i==-1) {
                l = 0;
                while(l<=r) {
                    mid = (l+r)/2;
                    if(pSum[mid][0] == 0 || pSum[mid][1] == 0 || pSum[mid][2] == 0) {
                        l = mid + 1;
                    }else {
                        index = mid;
                        r = mid - 1;
                    }
                }
            } else {
                while(l<=r) {
                    mid = (l+r)/2;
                    if(pSum[mid][0] - pSum[i][0] == 0 || pSum[mid][1] - pSum[i][1] == 0 || pSum[mid][2] - pSum[i][2] == 0) {
                        l = mid + 1;
                    }else {
                        index = mid;
                        r = mid - 1;
                    }
                }
            }
            return pSum.size()-index;
        }
        int numberOfSubstrings(string s) {
            int n = s.size();
            vector< vector<int> > pSum(n,vector<int>(3,0));
            for(int i=0;i<n;i++) {
                if(i!=0) {
                    pSum[i] = pSum[i-1];
                }
                pSum[i][s[i]-'a']++;
            }
            int count = 0, val;
            for(int i=-1;i<n-3;i++) {
                val = binarySearch(pSum,i);
                if(val == -1) {
                    continue;
                }
                count += val;
            }
            return count;
        }
    };