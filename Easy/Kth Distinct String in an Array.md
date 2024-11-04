> **Problem Number:** 2053 <br>
> **Problem Name:** Kth Distinct String in an Array <br>
> **Problem Link:** [https://leetcode.com/problems/kth-distinct-string-in-an-array](https://leetcode.com/problems/kth-distinct-string-in-an-array) <br>

    class Solution {
    public:
        string kthDistinct(vector<string>& arr, int k) {
            map<string,int> m;
            for(auto x:arr) {
                m[x]++;
            }
            int i = 0;
            for(auto x:arr) {
                if(m[x] == 1) {
                    i += 1;
                }
                if(i == k) {
                    return x;
                }
            }
            return "";
        }
    };