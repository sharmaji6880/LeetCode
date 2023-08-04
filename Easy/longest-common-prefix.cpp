class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string prefix;
        if(strs.size()==0) {
            prefix="";
        }
        else{
            prefix=strs[0];
        }
        
        for(int i=1;i<strs.size();i++){
            while(strs[i].find(prefix)!=0){
                prefix=prefix.substr(0,prefix.length()-1);
            };
        }
        
        return prefix;
        
        
    }
};
