> **Problem Number:** 3226 <br>
> **Problem Name:** Number of Bit Changes to Make Two Integers Equal <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-bit-changes-to-make-two-integers-equal](https://leetcode.com/problems/number-of-bit-changes-to-make-two-integers-equal) <br>

    class Solution {
    public:
        int minChanges(int n, int k) {
            if( n == k ) {
                return 0;
            }
            string s1 = "",s2 = "";
            while(n) {
                if(n%2) {
                    s1.push_back('1');
                }else {
                    s1.push_back('0');
                }
                n/=2;
            }
            while(k) {
                if(k%2) {
                    s2.push_back('1');
                }else {
                    s2.push_back('0');
                }
                k/=2;
            }
            int diff;

            if(s1.size() < s2.size()) {
                diff = s2.size() - s1.size();
                for(int i=0;i<diff;i++) {
                    s1.push_back('0');
                }
            }else if(s1.size() > s2.size()) {
                diff = s1.size() - s2.size();
                for(int i=0;i<diff;i++) {
                    s2.push_back('0');
                }
            }
            int size = s1.size();
            int count = 0;
            for(int i=0;i<size;i++) {
                if(s1[i] == '0') {
                    if(s2[i] == '1') {
                        return -1;
                    }
                    continue;
                }
                if(s2[i] == '0') {
                    count += 1;
                }

            }
            return count;
        }
    };