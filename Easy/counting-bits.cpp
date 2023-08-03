class Solution {
public:
    int returnCount(int num) {
        string s="";
        while(num) {
            if(num%2) {
                s+='1';
            }
            else {
                s+='0';
            }
            num/=2;
        }
        int count=0;
        for(auto x:s) {
            if(x=='1') {
                count++;
            }
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++) {
            ans.push_back(returnCount(i));
        }
        return ans;
    }
};
