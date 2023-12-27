class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        while(!(nums1.empty() || nums2.empty())) {
            merged.push_back(min(nums1[0],nums2[0]));
            if(min(nums1[0],nums2[0])==nums1[0]) {
                nums1.erase(nums1.begin());
            }
            else {
                nums2.erase(nums2.begin());
            }
        }
        if(nums1.empty()) {
            for(int i=0;i<nums2.size();i++) {
                merged.push_back(nums2[i]);
            }
        }
        else {
            for(int i=0;i<nums1.size();i++) {
                merged.push_back(nums1[i]);
            }
        }
        int len=merged.size();
        if(len%2==0) {
            return 1.0*(merged[len/2]+merged[len/2-1])/2;
        }
        return 1.0*merged[len/2];
    }
};
