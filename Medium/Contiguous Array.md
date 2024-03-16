> **Problem Number:** 525 <br>
> **Problem Name:** Contiguous Array <br>
> **Link:** [https://leetcode.com/problems/contiguous-array/description/](https://leetcode.com/problems/contiguous-array/description/) <br>

**Using Brute Force**

    // Time Complexity: O(n^3)
    // For larger inputs, it might result into TLE
    class Solution {
    public:
        int findMaxLength(vector<int>& nums) {
            int maxLen = INT_MIN;
            int n = nums.size();
            cout<<n;
            for(int i=0;i<n;i++) {
                for(int j=i;j<n;j++) {
                    int count = 0;
                    for(int k=i;k<=j;k++) {
                        if(nums[k]==1) {
                            count++;
                        }
                    }
                    if(j-i+1-count == count && j-i+1 > maxLen) {
                        maxLen = j-i+1;
                    }
                }
            }
            return max(0,maxLen);
        }
    };

**Using PrefixSum**

    class Solution {
    public:
        int findMaxLength(vector<int>& nums) {
            int n = nums.size();
            for(int i=0;i<n;i++) {
                if(nums[i]==0) {
                    nums[i]=-1;
                }
            }
            int pSum=0,maxLen=INT_MIN;
            map<int,int> m;
            m[pSum]=-1;
            for(int i=0;i<n;i++) {
                pSum+=nums[i];
                if(m.count(pSum) && i-m[pSum] > maxLen) {
                    maxLen = i-m[pSum];
                }
                if(!m.count(pSum)) {
                    m[pSum]=i;
                }
                
            }
            return max(0,maxLen);
        }
    };