class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++) {
            if(m.count(nums[i]) == 0) {
                m[nums[i]] = i;
                continue;
            }

            if(abs(m[nums[i]] - i) <=k) {
                return true;
            }

            m[nums[i]] = i;

        }
        return false;
    }
};
