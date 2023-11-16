class Solution {
public:
    int toDecimal(string s) {
        int ans=0;
        int n=s.size();
        for(int i=n-1;i>=0;i--) {
            if(s[i]=='1') {
                ans+=pow(2,n-1-i);
            }  
        }
        return ans;
    }
    string toBinaryString(int n) {
        string ans="";
        while(n) {
            if(n%2) {
                ans+='1';
            }else {
                ans+='0';
            }
            n/=2;
        }
        return ans;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        map<int,string> m;
        for(auto x:nums) {
            m[toDecimal(x)]=x;
        }
        
        string s;
        for(int i=0;i<pow(2,nums.size());i++) {
            if(!m.count(i)) {
                s=toBinaryString(i);
                break;
            }
        }
        int n=nums.size()-s.size();
        string ans="";
        for(int i=0;i<n;i++) {
            ans+='0';
        } 
        for(int i=s.size()-1;i>=0;i--) {
            ans+=s[i];
        }


        return ans;
    }
};
