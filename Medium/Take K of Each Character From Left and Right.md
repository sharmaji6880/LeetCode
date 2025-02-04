> **Problem Number:** 2516 <br>
> **Problem Name:** Take K of Each Character From Left and Right <br>
> **Problem Link:** [https://leetcode.com/problems/take-k-of-each-character-from-left-and-right](https://leetcode.com/problems/take-k-of-each-character-from-left-and-right) <br>

    class Solution {
    public:
        int binarySearch(vector<vector<int>> &arr, int r, int aReq, int bReq, int cReq) {
            int left = 0, right = r, mid;
            int index = -1;
            while( left <= right ) {
                mid = (left + right) / 2;
                if(arr[mid][0] >= aReq && arr[mid][1] >= bReq && arr[mid][2] >= cReq ) {
                    index = mid;
                    right = mid - 1;
                }else {
                    left = mid + 1;
                }
            }
            return index;
        }

        int takeCharacters(string s, int k) {
            if( k == 0 ) {
                return 0;
            }
            int n = s.size();
            vector<vector<int>> arr(n,{0,0,0});

            for(int i=0;i<n;i++) {
                if( i != 0 ) {
                    arr[i] = arr[i-1];
                }
                if(s[i] == 'a') {
                    arr[i][0] += 1;
                }else if(s[i] == 'b') {
                    arr[i][1] += 1;
                }else {
                    arr[i][2] += 1;
                }
            }

            int aObt  = 0, bObt = 0, cObt = 0; // aObt means no of a's obtained and so on
            int aReq,bReq,cReq; // aReq means no of a's required and so on
            int minMinutes = INT_MAX, minutes;
            int index;
            for(int i=n;i>=0;i--) {
                if( i < n && s[i] == 'a') {
                    aObt += 1;
                }else if(i < n && s[i] == 'b') {
                    bObt += 1;
                }else if( i < n && s[i] == 'c' ){
                    cObt += 1;
                }
                aReq = k <= aObt? 0 : k - aObt;
                bReq = k <= bObt? 0 : k - bObt;
                cReq = k <= cObt? 0 : k - cObt;
                
                if( aReq == 0 && bReq == 0 && cReq == 0 ) {
                    minutes = n-i;
                }else {
                    index = binarySearch(arr,i-1,aReq,bReq,cReq);
                    if(index == -1 ) {
                        continue;
                    }
                    minutes = index + 1 + n - i;
                }
                if( minutes < minMinutes ) {
                    minMinutes = minutes;
                }
            }
            return minMinutes == INT_MAX? -1:minMinutes;
        }
    };