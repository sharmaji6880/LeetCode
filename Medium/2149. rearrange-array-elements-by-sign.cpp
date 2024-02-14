class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> pos,neg;
        for(auto x:nums) {
            if(x<0) {
                neg.push(x);
            }else {
                pos.push(x);
            }
        }
        int n = nums.size();
        nums={};
        bool flag = true;
        while(n--) {
            if(flag==true) {
                nums.push_back(pos.front());
                pos.pop();
                flag=false;
            }else {
                nums.push_back(neg.front());
                neg.pop();
                flag=true;
            }
        }
        return nums;

    }
};