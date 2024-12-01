> **Problem Number:** 1346 <br>
> **Problem Name:** Check If N and Its Double Exist <br>
> **Problem Link:** [https://leetcode.com/problems/check-if-n-and-its-double-exist](https://leetcode.com/problems/check-if-n-and-its-double-exist) <br>

**Brute Force Solution:** <br>

    class Solution {
    public:
        bool checkIfExist(vector<int>& arr) {
            int n = arr.size();
            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    if( arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i] ) {
                        return true;
                    }
                }
            }
            return false;
        }
    };

**Optimal Solution:** <br>

    class Solution {
    public:
        bool checkIfExist(vector<int>& arr) {
            set<int> s;
            for(auto x:arr) {
                if( x % 2 == 0 ) {
                    if(s.count(x/2) || s.count(x*2)) {
                        return true;
                    }
                }else {
                    if(s.count(x*2)) {
                        return true;
                    }
                }
                s.insert(x);
            }
            return false;
        }
    };