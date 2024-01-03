class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<string> arr;
        int m=bank.size();
        int n=bank[0].size();

        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(bank[i][j] == '1') {
                    arr.push_back(bank[i]);
                    break;
                }
            }
        }
        if(arr.size()==0) {
            return {};
        }
        map<int,int> M;
        for(int i=0;i<arr.size();i++) {
            int count=0;
            for(int j=0;j<n;j++) {
                if(arr[i][j] == '1') {
                    count++;
                }
            }
            M[i]=count;
        }
        int ans=0;

        int i=0;
        while(i!=arr.size()-1) {
            ans+=M[i]*M[i+1];
            i++;
        }
        return ans;
    }
};
