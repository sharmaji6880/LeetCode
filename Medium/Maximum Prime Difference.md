> **Problem Number:** 3115 <br>
> **Problem Name:** Maximum Prime Difference <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-prime-difference/](https://leetcode.com/problems/maximum-prime-difference/) <br>

    class Solution {
    public:
        bool isPrime(int n) {
            if(n<=1) {
                return false;
            }
            for(int i=2;i<=sqrt(n);i++) {
                if(n%i == 0) {
                    return false;
                }
            }
            return true;
        }
        int maximumPrimeDifference(vector<int>& nums) {
            int left=0,right = nums.size()-1;
            while(left <= right) {
                if(isPrime(nums[left]) && isPrime(nums[right])) {
                    return right-left;
                }
                else if( isPrime(nums[left]) && !isPrime(nums[right]) ) {
                    right--;
                }
                else if( !isPrime(nums[left]) && isPrime(nums[right]) ) {
                    left++;
                }
                else {
                    left++;
                    right--;
                }
            }
            return -1;
        }
    };