> **Problem Number:** 3152 <br>
> **Problem Name:** Special Array II <br>
> **Problem Link:** [https://leetcode.com/problems/special-array-ii](https://leetcode.com/problems/special-array-ii) <br>

**Brute Force Approach:** <br>

    // This may result into TLE for larger inputs
    // Time Complexity: O(q*n)
    // q = queries.size()
    // n = nums.size()
    class Solution {
    public:
        vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
            int n = nums.size(), q = queries.size();
            bool flag;
            vector<bool> result(q,false);
            for(int i=0;i<q;i++) {
                flag = false;
                for(int j=queries[i][0]; j < queries[i][1]; j++) {
                    if( (nums[j] + nums[j+1]) % 2 == 0 ) {
                        flag = true;
                        break;
                    }
                }
                if( !flag ) {
                    result[i] = true;
                }
            }
            return result;
        }
    };

**Optimal Solution:** <br>

    // Time Complexity: O(max(n,q))
    // n = nums.size()
    // q = queries.size()
    class Solution {
    public:
        vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
            int n = nums.size(), q = queries.size();
            vector<int> pSum(n,0);

            for(int i=0;i<n;i++) {
                if( i == 0 ) {
                    pSum[i] = 1;
                    continue;
                }
                if( ( nums[i] + nums[i-1] ) % 2 ) {
                    pSum[i] = pSum[i-1] + 1;
                }else {
                    pSum[i] = pSum[i-1];
                }
            }
            vector<bool> result(q,false);
            int l,r;
            for( int i = 0; i < q; i++ ) {
                l = queries[i][0];
                r = queries[i][1];
                if( pSum[r] - pSum[l] == r - l ) {
                    result[i] = true;
                }else {
                    result[i] = false;
                }
            }
            return result;
        }
    };