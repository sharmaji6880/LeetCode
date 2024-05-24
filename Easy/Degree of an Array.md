> **Problem Number:** 697 <br>
> **Problem Name:** Degree of an Array <br>
> **Problem Link:** [https://leetcode.com/problems/degree-of-an-array/](https://leetcode.com/problems/degree-of-an-array/) <br>

    class Solution {
    public:
        int length(int &a,vector<int> &arr) {
            int left,right;
            for(int i=0;i<arr.size();i++) {
                if(arr[i] == a) {
                    left = i;
                    break;
                }
            }
            for(int i=arr.size()-1;i>=0;i--) {
                if(arr[i] == a) {
                    right = i;
                    break;
                }
            }
            return right-left+1;
        }
        int findShortestSubArray(vector<int>& nums) {
            map<int,int> m;
            for(auto x:nums) {
                m[x]++;
            }
            int maxFreq = INT_MIN;
            for(auto x:m) {
                if(x.second > maxFreq) {
                    maxFreq = x.second;
                }
            }
            vector<int> arr;
            for(auto x:m) {
                if(x.second == maxFreq) {
                    arr.push_back(x.first);
                }
            }
            int ans = INT_MAX;
            for(int i=0;i<arr.size();i++) {
                int len = length(arr[i],nums);
                if(len < ans) {
                    ans = len;
                }
            }
            return ans;
        }
    };