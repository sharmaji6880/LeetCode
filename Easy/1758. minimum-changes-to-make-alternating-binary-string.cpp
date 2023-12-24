class Solution {
public:
    int distance(string s1,bool b) {
        int ans=0;
        if(b==true) {
            for(int i=0;i<s1.size();i++) {
                if(i%2==0 && s1[i]=='1') {
                    ans++;
                }else if(i%2==1 && s1[i]=='0') {
                    ans++;
                }
            }
        }else {
            for(int i=0;i<s1.size();i++) {
                if(i%2==0 && s1[i]=='0') {
                    ans++;
                }else if(i%2==1 && s1[i]=='1'){
                    ans++;
                }
            }
        }
        return ans;
    }
    int minOperations(string s) {
        return min(distance(s,true),distance(s,false));
    }
};
