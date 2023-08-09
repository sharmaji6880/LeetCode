class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0,count2=0,count3=0;
        for(auto x:nums) {
            if(x==0) {
                count1++;
            }
            else if(x==1) {
                count2++;
            }
            else {
                count3++;
            }
        }
        cout<<count1<<endl<<count2<<endl<<count3;
        nums={};
        while(count1--) {
            nums.push_back(0);
        }
        while(count2--) {
            nums.push_back(1);
        }
        while(count3--) {
            nums.push_back(2);
        }
    }
};
