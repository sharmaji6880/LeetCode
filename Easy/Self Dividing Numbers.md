> **Problem Number:** 728 <br>
> **Problem Name:** Self Dividing Numbers <br>
> **Problem Link:** [https://leetcode.com/problems/self-dividing-numbers/](https://leetcode.com/problems/self-dividing-numbers/) <br>

    class Solution {
    public:
        vector<int> selfDividingNumbers(int left, int right) {
            vector<int> arr;

            for(int i=left;i<=right;i++) {
                int num = i;
                bool flag = false;
                while(num) {
                    int lastDigit = num%10;
                    num/=10;
                    if(lastDigit!=0 && i%lastDigit == 0) {
                    continue; 
                    }
                    flag = true;
                    break;
                }
                if(flag) {
                    continue;
                }
                arr.push_back(i);

            }
            return arr;
        }
    };