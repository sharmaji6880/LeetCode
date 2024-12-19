> **Problem Number:** 769 <br>
> **Problem Name:** Max Chunks To Make Sorted <br>
> **Problem Link:** [https://leetcode.com/problems/max-chunks-to-make-sorted](https://leetcode.com/problems/max-chunks-to-make-sorted) <br>

    class Solution {
    public:
        int maxChunksToSorted(vector<int>& arr) {
            int n = arr.size(), count = 0, Max = INT_MIN;
            vector<int> mins(n,0);
            for(int i=n-1;i>=0;i--) {
                if( i == n - 1 ) {
                    mins[i] = arr[i];
                    continue;
                }
                mins[i] = min(mins[i+1],arr[i]);
            }
        
            for(int i=0;i<n;i++) {
                Max = max(Max,arr[i]);
                if( i == n - 1 ) {
                    count += 1;
                    break;
                }
                if( mins[i+1] < Max ) {
                    continue;
                }
                count += 1;
            }
            return count;
        }
    };