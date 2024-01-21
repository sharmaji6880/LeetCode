// Solution 1
// This is a brute force approach where, for every possible contiguous subarray, we find the minimum element in the subarray and add this min element to the result.
// For larger inputs, this may result into TLE(Time Limit Exceeded).
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                int Min = 30001;
                for(int k=i;k<=j;k++) {
                    if(arr[k] < Min) {
                        Min = arr[k];
                    }
                }
                ans = (ans+Min) % 1000000007 ;
            }
        }

        return ans;
    }
};


// Solution 2
// This is a Dynamic Programming based approach
// For larger inputs, this approach may result into MLE(Memory Limit Exceeded)
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                if(i==j) {
                    dp[i][j]=arr[i];
                    continue;
                }
                dp[i][j]=min(dp[i][j-1],arr[j]);
            }
        }

        long ans=0;

        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                ans = (ans+dp[i][j]) % (1000000007);
            }
        }
        return ans;
    }
};


// Solution 3 
// This is an improved version of the brute force approach.
// However, it may also result into TLE for larger inputs.

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long ans = 0;

        for(int i=0;i<n;i++) {

            int Min; // varibale to store the minimum element in the subarray

            for(int j=i;j<n;j++) {

                if(i == j) { // i.e, subarray is of size 1
                    Min = arr[i];
                    ans = (ans + Min) % 1000000007 ;
                    continue;
                }
                Min = min(Min, arr[j]);
                ans = (ans + Min) % 1000000007 ;

            }
        }

        return ans;
    }
};
