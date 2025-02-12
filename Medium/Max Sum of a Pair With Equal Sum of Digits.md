> **Problem Number:** 2342 <br>
> **Problem Name:** Max Sum of a Pair With Equal Sum of Digits <br>
> **Problem Link:** [https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits](https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits) <br>

    class Solution {
    public:
        int sumOfDigits(int n) {
            int sum = 0;
            while(n) {
                sum += n%10;
                n/=10;
            }
            return sum;
        }
        int maximumSum(vector<int>& nums) {
            int sod; // Sum of Digits
            int son = 0; // Sum of Numbers
            int n = nums.size(), maxSon = INT_MIN;
            map<int,set<int>> m;
            for(int i=0;i<n;i++) {
                sod = sumOfDigits(nums[i]);
                if(m.find(sod) != m.end()) {
                    son = *(--m[sod].end()) + nums[i];
                    if(son > maxSon) {
                        maxSon = son;
                    }
                }
                m[sod].insert(nums[i]);
            }
            return max(-1,maxSon);
        }
    };