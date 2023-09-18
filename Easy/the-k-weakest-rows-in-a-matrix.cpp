class Solution {
public:
    static bool cmp(pair<int,int> a,pair<int,int>b) {
        if(a.second < b.second) {
            return true;
        }else if(a.second == b.second) {
            if(a.first < b.first) {
                return true;
            }else {
                return false;
            }
        }
        return false;
    }

    int numberofSoldiers(vector<int> arr) {
        int count=0;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]) {
                count++;
            }else {
                break;
            }
        }
        return count;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> arr;
        for(int i=0;i<mat.size();i++) {
            arr.push_back({i,numberofSoldiers(mat[i])});
        }
        sort(arr.begin(),arr.end(),cmp);
        int count=0;
        vector<int> ans;
        for(auto x:arr) {
            if(count==k) {
                break;
            }
            ans.push_back(x.first);
            count++;
        }
        return ans;

    }
};
