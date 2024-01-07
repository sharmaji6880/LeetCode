// This approach doesn't use extra memory
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<(int)nums.size()-1;i++) {
            if(nums[i]==nums[i+1]) {
                return true;
            }
        }
        return false;
    }
};


// This approach uses extra memory
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto x:nums) {
            s.insert(x);
        }
        if(s.size()==nums.size()) {
            return false;
        }
        return true;
    }
};
