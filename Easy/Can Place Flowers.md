> **Problem Number:** 605 <br>
> **Problem Name:** Can Place Flowers <br>
> **Link:** [https://leetcode.com/problems/can-place-flowers/](https://leetcode.com/problems/can-place-flowers/) <br>

    class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            vector<int> arr;
            arr.push_back(0);
            for(int i=0;i<flowerbed.size();i++) {
                arr.push_back(flowerbed[i]);
            }
            arr.push_back(0);
            int count = 0;
            int i = 1;
            while(i<arr.size()-1) {
                if(arr[i]==1) {
                    i++;
                    continue;
                }
                if(arr[i-1] == 0 && arr[i+1]==0) {
                    count++;
                    i+=2;
                }else {
                    i++;
                }

            }
            if(count >= n) {
                return true;
            }
            return false;
        }
    };