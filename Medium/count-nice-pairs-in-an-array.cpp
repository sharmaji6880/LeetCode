class Solution {
public:
    int rev(int n) {
        string s1=to_string(n);
        string s2="";
        for(int i=s1.size()-1;i>=0;--i) {
            s2+=s1[i];
        }
        return stoi(s2);
    }
    int countNicePairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            nums[i]-=rev(nums[i]);
        }
        int ans=0;
        map<int,int> m;
        for(auto x:nums) {
            if(m.count(x)) {
                ans+=m[x];
                ans=ans%(1000000000+7);
                m[x]++;
            }else {
                m[x]=1;
            }
        }
        return ans;
    }
};
