class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(auto x:hours) {
            if(x>=target) {
                count++;
            }
        }
        return count;
    }
};
