class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string> arr = {"999","888","777","666","555","444","333","222","111","000"};
        for(auto x:arr) {
            for(int i=0;i<num.length()-2;i++) {
                if(num.substr(i,3)==x) {
                    return x;
                }
            }
        }
        return "";
    }
};
