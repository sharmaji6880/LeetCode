class Solution {
public:
    void swap(int &a,int &b) {
        int temp=a;
        a=b;
        b=temp;
    }
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int prevLeft=-1,prevRight=-1;
        for(int i=n-1;i>=0;i--) {
            for(int j=i;j>=0;j--) {
                if(nums[j] < nums[i]) {
                    if(j>prevLeft) {
                        prevLeft=j;
                        prevRight=i;
                    }
                }
            }
        }
        if(prevLeft==-1 && prevRight==-1) {
            for(int i=0;i<n/2;i++) {
                swap(nums[i],nums[n-1-i]);
            }
            return;
        }
        swap(nums[prevLeft],nums[prevRight]);
        sort(nums.begin()+prevLeft+1,nums.end());
        return;
    }
};
