> **Problem Number:** 670 <br>
> **Problem Name:** Maximum Swap <br>
> **Problem Link:** [https://leetcode.com/problems/maximum-swap](https://leetcode.com/problems/maximum-swap) <br>

    class Solution {
    public:
        int maximumSwap(int num) {
            string s = to_string(num);
            int n = s.size();

            vector< pair<int,int> > maxFromRight(n,{0,0});
            int max = INT_MIN;
            
            for(int i=n-1;i>=0;i--) {
                if(s[i] - '0' > max) {
                    max = s[i] - '0';
                    maxFromRight[i].first = s[i]-'0';
                    maxFromRight[i].second = i;
                }else {
                    maxFromRight[i] = maxFromRight[i+1];
                }
            }
            for(int i=0;i<n-1;i++) {
            if(maxFromRight[i+1].first  > s[i] - '0') {
                swap(s[i],s[maxFromRight[i+1].second]);
                break;
            }
            }
            return stoi(s);
        }
    };