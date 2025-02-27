> **Problem Number:** 1980 <br>
> **Problem Name:** Find Unique Binary String <br>
> **Problem Link:** [https://leetcode.com/problems/find-unique-binary-string](https://leetcode.com/problems/find-unique-binary-string) <br> 

    class Solution {
    public:
        int binToDec(string s) {
            int n = s.size(), ans = 0;
            for(int i=0;i<n;i++) {
                if(s[i]=='0') continue;
                ans += pow(2,n-1-i);
            }
            return ans;
        }
        string decToBin(int num, int n) {
            string s = "";
            while(num) {
                if(num%2) {
                    s.push_back('1');
                }else{
                    s.push_back('0');
                }
                num/=2;
                n--;
            }
            while(n--) {
                s.push_back('0');
            }
            int l=0,r=s.size()-1;
            char c;
            while(l<r) {
                c = s[l];
                s[l] = s[r];
                s[r] = c;
                l++;r--;
            }
            return s;
        }
        string findDifferentBinaryString(vector<string>& nums) {
            int n = nums.size();
            sort(nums.begin(),nums.end());
            if(binToDec(nums.front()) != 0 ) {
                return decToBin(0,n);
            }
            for(int i=0;i<n-1;i++) {
                if(binToDec(nums[i]) == binToDec(nums[i+1]) -1 ) continue;
                return decToBin(binToDec(nums[i]) + 1,n);
            }
            return decToBin(binToDec(nums.back()) + 1,n);

        }
    };