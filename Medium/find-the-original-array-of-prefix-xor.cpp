class Solution {
public:
    int findReverse(int a,int b) {
        return (~a&b | ~b&a);
    }
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> arr(n);
        for(int i=0;i<n;i++) {
            if(i==0) {
                arr[i]=pref[i];
                continue;
            }
            arr[i]=findReverse(pref[i-1],pref[i]);
        }
        return arr;
    }
};
