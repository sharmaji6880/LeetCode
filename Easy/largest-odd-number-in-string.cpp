class Solution {
public:
    static bool cmp(string s1,string s2) {
      if(s1.size() > s2.size()) {
        return true;
      }else if(s1.size() < s2.size()) {
          return false;
      }
      return s1>s2;
    }
    string largestOddNumber(string num) {
        set<char> s = {'1','3','5','7','9'};

        vector<string> ans;
        
        int n=num.size();
        for(int i=0;i<n;i++) {
          for(int j=i;j<n;j++) {
            if(s.count(num[j])) {
              ans.push_back(num.substr(i,j-i+1));
            }
          }
        }
        sort(ans.begin(),ans.end(),cmp);
        if(ans.size()==0) {
            return "";
        }
        cout<<num.size();
        return ans[0];
    }
};
