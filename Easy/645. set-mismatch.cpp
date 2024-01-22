class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int totalSum = n*(n+1)/2;

        int duplicate;

        set<int> s;

        int sum=0;

        for(auto x:nums) {
            if(s.count(x)) {
                duplicate=x;
                continue;
            }
            sum+=x;
            s.insert(x);
        }

        return {duplicate,totalSum-sum};
    }
};
