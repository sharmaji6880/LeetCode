> **Problem Number:** 3309 <br>
> **Problem Name:** Maximum Possible Number by Binary Concatenation <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-possible-number-by-binary-concatenation/](https://leetcode.com/problems/maximum-possible-number-by-binary-concatenation/) <br>

    class Solution {
    public:
        string decToBinString(int n) {
            string s = "";
            while(n) {
                if( n % 2 ) {
                    s.push_back('1');
                } else {
                    s.push_back('0');
                }
                n/=2;
            }
            return s;
        }

        int binStringToDec(string s) {
            int n = 0;
            int size = s.size();

            for(int i=0; i<size; i++) {
                if( s[i] == '1' ) {
                    n += pow(2,i);
                }
            }
            return n;
        }


        int maxGoodNumber(vector<int>& nums) {
            string a,b,c;

            a = decToBinString(nums[0]);
            b = decToBinString(nums[1]);
            c = decToBinString(nums[2]);

            int maxNum = INT_MIN;
            vector<int> arr(6);
            arr[0] = binStringToDec(a+b+c);
            arr[1] = binStringToDec(a+c+b);
            arr[2] = binStringToDec(b+a+c);
            arr[3] = binStringToDec(c+a+b);
            arr[4] = binStringToDec(b+c+a);
            arr[5] = binStringToDec(c+b+a);

            for(auto x:arr) {
                if( x > maxNum ) {
                    maxNum = x;
                }
            }
            return maxNum;
        }
    };