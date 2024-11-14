> **Problem Number:** 2563 <br>
> **Problem Name:** Count the Number of Fair Pairs <br>
> **Problem Link:** [https://leetcode.com/problems/count-the-number-of-fair-pairs](https://leetcode.com/problems/count-the-number-of-fair-pairs) <br>

**Using Brute Force:** <br>

    // This is a Brute Force Solution and for larger inputs,
    // might result into TLE
    class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            long long count = 0;
            int n = nums.size();
            int sum;
            for(int i=0;i<n-1;i++) {
                for(int j=i+1;j<n;j++) {
                    sum = nums[i] + nums[j];
                    if(sum >= lower && sum <= upper) {
                        count += 1;
                    }
                }
            }
            return count;
        }
    };

**Optimal Solution:** <br>

    class Solution {
    public:
        int binarySearch(vector<int> &nums,int r, int &lower, int &upper,bool leftMost ) {
            int left = 0, right = r, mid, num , index = -1,x = nums[r+1];
            
                while( left <= right ) {
                    mid = (left + right) / 2;
                    num = nums[mid];
                    if( x + num > upper ) {
                        right = mid - 1;
                    }else if( x + num < lower ) {
                        left = mid + 1;
                    }else {
                        index = mid;
                        if( leftMost ) {
                            right = mid - 1;
                        }else {
                            left = mid + 1;
                        }
                    }
                }
                return index;
        }

        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            long long count = 0;
            sort(nums.begin(),nums.end());
            int leftMostIndex,rightMostIndex;

            for(int i=1;i<nums.size();i++) {
                leftMostIndex =  binarySearch(nums,i-1,lower,upper,true);
                rightMostIndex = binarySearch(nums,i-1,lower,upper,false);
                if(leftMostIndex + rightMostIndex != -2 ) {
                    count += rightMostIndex - leftMostIndex + 1;
                }
                
            }
            return count;
        }
    };