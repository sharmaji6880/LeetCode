class Solution {
public:
    bool isSorted(vector<int> &arr,int left,int right) {
        for(int i=left;i<right;i++) {
            if(arr[i]>arr[i+1]) {
                return false;
            }
        }
        return true;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int mid;
        while(left<=right) {
            mid=(left+right)/2;
            if(nums[mid]==target) {
                return true;
            }
            if(isSorted(nums,left,mid)) {
                if(target>=nums[left] && target<=nums[mid]) {
                    right=mid-1;
                }
                else {
                    left=mid+1;
                }
            }
            else {
                if(target>=nums[mid+1] && target<=nums[right]) {
                    left=mid+1;
                }
                else {
                    right=mid-1;
                }
            }
        }
        return false;
    }
};
