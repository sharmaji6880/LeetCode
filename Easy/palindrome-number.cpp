class Solution {
public:
    bool isPalindrome(int x) {
        string y = to_string(x);
        string z = "";
        
        for(int i=(y.length()-1);i>=0;i--){
            z+=y[i];
        }
        if (y == z) {
            return true;
        }else {
            return false;
        }
    }
};
