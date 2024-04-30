> **Problem Number:** 415 <br>
> **Problem Name:** Add Strings <br>
> **Problem Link:** [https://leetcode.com/problems/add-strings/](https://leetcode.com/problems/add-strings/) <br>

    class Solution {
    public:
        string addStrings(string num1, string num2) {
        int n1 = num1.size(), n2 = num2.size();
        if(n1 < n2) {
            for(int i=0;i<n2-n1;i++) {
                num1.insert(0,"0");
            }
        }else {
            for(int i=0;i<n1-n2;i++) {
                num2.insert(0,"0");
            }
        }
        int n = num1.size();
        string ans = "";
        int sum = 0, carry = 0;
        for(int i=n-1;i>=0;i--) {
            sum = (num1[i] + num2[i] - '0' - '0' + carry) % 10;
            carry = (num1[i] + num2[i] - '0' - '0' + carry) / 10;
            ans+= to_string(sum);
        }
        if(carry) {
            ans+= to_string(carry);
        }
        n = ans.size();

        for(int i=0;i<n/2;i++) {
            char temp = ans[i];
            ans[i] = ans[n-1-i];
            ans[n-1-i] = temp;
        }

        return ans;

        }
    };