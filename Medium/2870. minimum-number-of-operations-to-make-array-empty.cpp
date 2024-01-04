class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int> m;
        for(auto x:nums) {
            m[x]++;
        }
        int ans=0;
        for(auto x:m) {
            int num=x.second;

            if(num == 1) {
                return -1;
            }
            else if(num % 3 == 0 ) {
                ans+=num/3;
            }else if( num % 3 == 1) {
                ans+=(num-4)/3 + 2;
            }else if(num % 3 == 2) {
                ans+=(num-2)/3 + 1;
            }
        }
        return ans;
    }
};
