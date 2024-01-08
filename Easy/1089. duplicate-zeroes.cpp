class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n=arr.size();

        vector<int> ans;
        for(auto x:arr) {
            if(x==0) {
                ans.push_back(0);
                if(ans.size()==n) {
                    break;
                }
                ans.push_back(0);
            }else {
                ans.push_back(x);
            }
            if(ans.size()==n) {
                break;
            }
        }
        arr=ans;
        
    }
};
