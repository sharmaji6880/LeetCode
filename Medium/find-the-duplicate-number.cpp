class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       map<int,int> m;
       for(auto x:nums) {
           if(m.count(x)) {
               return x;
           }
           m[x]++;
       } 
       return 0;
    }
};
