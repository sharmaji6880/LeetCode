class Solution {
public:

    bool isVowel(char c) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int count1=0,count2=0;

        for(int i=0;i<s.size();i++) {
            if(isVowel(s[i])) {
                if(i<s.size()/2) {
                    count1++;
                }else {
                    count2++;
                }
            }
        }
        if(count1==count2) {
            return true;
        }
        return false;
        
    }
};
