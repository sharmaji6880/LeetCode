class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s1=to_string(low);
        string s2=to_string(high);

        int n1=s1.size();
        int n2=s2.size();

        for(int i=n1;i<=n2;i++) { // i denotes the length of the number
            int num=9-i+1;        // num denotes the no. of numbers with length i
            string s="";
            for(int j=1;j<=num;j++) {
                
                if(j==1) {
                    for(int k=1;k<=i;k++) {
                        s+=to_string(k);
                    }
                    if(stoi(s) <=high && stoi(s)>=low) {
                        ans.push_back(stoi(s));
                    }
                    
                }else {
                    s=(s.substr(1,s.size()-1))+to_string(stoi(s.substr(s.size()-1,1))+1);
                    if(stoi(s) <= high && stoi(s)>=low) {
                        ans.push_back(stoi(s));
                    }
                    
                }
            }
        }
        return ans;

    }
};
