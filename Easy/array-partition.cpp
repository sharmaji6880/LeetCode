class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n=nums.size()/2;
        cout<<"size of array:"<<n<<endl;
        for(int i=0;i<n;i++) {
            sum+=min(nums[2*i],nums[2*i+1]);
        }
        return sum;
    }
};
