class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mymap;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            mymap[nums[i]]++;
        }
        map<int,int>::iterator it;
        int majorityElement;
        for(it=mymap.begin();it!=mymap.end();it++) {
            if((*it).second>n/2) {
                majorityElement=(*it).first;
                break;
            }
        }
        return majorityElement;
    }
};
