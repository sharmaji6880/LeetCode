> **Problem Number:** 350 <br>
> **Problem Name:** Intersection of Two Arrays II <br>
> **Problem Link:** [https://leetcode.com/problems/intersection-of-two-arrays-ii/](https://leetcode.com/problems/intersection-of-two-arrays-ii/) <br>

    class Solution {
    public:
        vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
            map<int,int> map1,map2;
            for(int i=0;i<(int)nums1.size();++i) {
                map1[nums1[i]]++;
            }
            for(int i=0;i<(int)nums2.size();++i) {
                map2[nums2[i]]++;
            }
            vector<int> ans;
            map<int,int>::iterator it;
            for(it=map1.begin();it!=map1.end();++it) {
                if(map2.count(it->first)) {
                    for(int i=1;i<=min(map1[it->first],map2[it->first]);++i) {
                        ans.push_back(it->first);
                    }
                }
            }
            return ans;
        }
    };