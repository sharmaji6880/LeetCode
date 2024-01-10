class Solution {
public:
    int hIndex(vector<int>& citations) {
        map<int,int> m;

        for(int i=0;i<=citations.size();i++) {
            m[i]=0;
            for(auto x:citations) {
                if(x >= i) {
                    m[i]++;
                }
            }
        }
        for(int i=citations.size();i>=0;i--) {
            if(m[i]>=i) {
                return i;
            }
        }
        return -1;
    }
};
