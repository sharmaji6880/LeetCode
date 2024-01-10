// This is a brute force approach
// The time complexity for this approach is O(n^3)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum =  INT_MIN;
        for(int i=0;i<nums.size();i++) {
            
            for(int j=i;j<nums.size();j++) {
                int sum=0;
                for(int k=i;k<=j;k++) {
                    sum+=nums[k];
                }
                if(sum > maxSum) {
                    maxSum=sum;
                }
            }
            
        }
        return maxSum;
    }
};

// Kadane's Algorithm
// Time Complexity: O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++) {
            sum+=nums[i];
            if(sum > maxSum) {
                maxSum=sum;
            }
            if(sum < 0) {
                sum=0;
            }
        }
        return maxSum;
    }
};
