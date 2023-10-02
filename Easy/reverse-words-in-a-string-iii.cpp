class Solution {
public:
    void reverseWord(string &s) {
        int n=s.size();
        for(int i=0;i<n/2;i++) {
            char temp=s[i];
            s[i]=s[n-1-i];
            s[n-1-i]=temp;
        }
    }
    string reverseWords(string s) {
        int prev=0;
        vector<string> arr;
        for(int i=0;i<s.size();i++) {
            if(i==s.size()-1) {
                arr.push_back(s.substr(prev,i-prev+1));
                break;
            }
            if(s[i]==' ') {
                arr.push_back(s.substr(prev,i-prev));
                prev=i+1;
            }
        }
        for(auto &x:arr) {
            reverseWord(x);
        }
        for(auto x:arr) {
            cout<<x<<" "<<x.size()<<endl;
        }
        s="";
        for(int i=0;i<arr.size();i++) {
            if(i==arr.size()-1) {
                s+=arr[i];
                continue;
            }
            s+=arr[i];
            s+=' ';
        }
        return s;
    }
};
