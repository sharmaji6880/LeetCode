> **Problem Number:** 3318 <br>
> **Problem Name:** Find X-Sum of All K-Long Subarrays I <br>
> **Problem Link:** [https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i](https://leetcode.com/problems/find-x-sum-of-all-k-long-subarrays-i) <br>

    class Solution {
    public:
        static bool cmp(pair<int,int> &a, pair<int,int> &b) {
            if(a.second == b.second) {
                return a.first > b.first;
            }
            return a.second > b.second;
        }
        int xSum(vector<int> &nums, int i, int j,int x) {
            vector<pair<int,int>> v(51,{0,0});
            for(int c = i; c <= j; c++) {
                v[nums[c]].first = nums[c];
                v[nums[c]].second += 1;
            }
            sort(v.begin(),v.end(),cmp);
            int sum = 0;
            for(int i=0; i<x;i++) {
                sum += v[i].first * v[i].second;
            }
            return sum;
        }
        vector<int> findXSum(vector<int>& nums, int k, int x) {
            int n = nums.size();
            vector<int> answer(n-k+1,0);

            for(int i=0;i<answer.size();i++) {
                answer[i] = xSum(nums,i,i+k-1,x);
            }
            return answer;
        
        }
    };