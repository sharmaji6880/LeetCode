> **Problem No.:** 3477  
> **Problem Name:** Fruits Into Baskets II  
> **Problem Link:** [https://leetcode.com/problems/fruits-into-baskets-ii](https://leetcode.com/problems/fruits-into-baskets-ii)  


    class Solution {
    public:
        int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
            int n = fruits.size(), ans = 0;
            int prev = 0;
            bool placed;
            for(int i=0;i<n;i++) {
                placed = false;
                for(int j=0;j<n;j++) {
                    if(baskets[j] < fruits[i]) continue;
                    baskets[j] = -1;
                    placed = true;
                    break;
                }
                if(!placed) ans++;
            }
            return ans;
        }
    };