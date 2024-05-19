> **Problem Number:** 179 <br>
> **Problem Name:** Largest Number <br>
> **Problem Link:** [https://leetcode.com/problems/largest-number/](https://leetcode.com/problems/largest-number/) <br>

class Solution {
public:
    static bool hasCommonPrefix(string &a, string &b) {  
        if(a[0] == b[0]) {
            return true;
        }
        return false;
    }
    static bool cmp(string a, string b) {
        if(!hasCommonPrefix(a,b)) {
            return a > b;
        }
        string s1 = a+b;
        string s2 = b+a;

        return s1 > s2;
    }
    
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        int count = 0;
        for(int i=0;i<nums.size();i++) {
            arr.push_back(to_string(nums[i]));
            if(nums[i]==0) {
                count++;
            }
        }
        sort(arr.begin(),arr.end(),cmp);

      
        
        string ans = "";
        if(count == nums.size()) {
            return "0";
        }
        for(auto x:arr) {
            ans += x;
        }
        return ans;
    }
};