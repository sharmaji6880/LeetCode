> **Problem Number:** 1013 <br>
> **Problem Name:** Partition Array Into Three Parts With Equal Sum <br>
> **Problem Link:** [https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/](https://leetcode.com/problems/partition-array-into-three-parts-with-equal-sum/) <br>

    class Solution {
    public:
        bool canThreePartsEqualSum(vector<int>& arr) {
            int totalSum = 0;
            for(auto x:arr) {
                totalSum += x;
            }
            if(totalSum % 3 != 0) {
                return false;
            }
            int requiredSum = totalSum / 3;
            int sum =0;
            int n = arr.size();
            int count = 0;

            for(int i=0;i<n;i++) {
                sum += arr[i];
                if(sum == requiredSum) {
                    sum = 0;
                    count += 1;
                }
                if(count == 2 && i != n-1) {
                    return true;
                }
            }
            
            return false;
        }
    };