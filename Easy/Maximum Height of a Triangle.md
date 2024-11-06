> **Problem Number:** 3200 <br>
> **Problem Name:** Maximum Height of a Triangle <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-height-of-a-triangle](https://leetcode.com/problems/maximum-height-of-a-triangle) <br>

    class Solution {
    public:
        int maxHeightOfTriangle(int red, int blue) {
            int x1 = red, x2 = blue;
            int num1 = 1,num2 = 1;
            string flag = "red";
            while(true) {
                if(flag == "red") {
                    x1 -= num1;
                    num1 += 1;
                    if(x2 < num1) {
                        break;
                    }
                    flag = "blue";
                }else if(flag == "blue") {
                    x2 -= num1;
                    num1 += 1;
                    if(x1 < num1) {
                        break;
                    }
                    flag = "red";
                }
            }
            flag = "blue";
            x1 = red, x2 = blue;
            while(true) {
                if(flag == "red") {
                    x1 -= num2;
                    num2 += 1;
                    if(x2 < num2) {
                        break;
                    }
                    flag = "blue";
                }else if(flag == "blue") {
                    x2 -= num2;
                    num2 += 1;
                    if(x1 < num2) {
                        break;
                    }
                    flag = "red";
                }
            }
            return max(num1,num2) - 1;

        }
    };