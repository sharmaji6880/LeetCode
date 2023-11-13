class Solution {
public:
    bool isVowel(char c) {
        if (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U') {
            return true;
        }
        return false;
    }
    static bool cmp(char a, char b) {
        if(a <= b) {
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        vector<char> vowels,indices;
        for(int i=0;i<s.size();i++) {
            if(isVowel(s[i])) {
                vowels.push_back(s[i]);
                indices.push_back(i);
            }
        }
        sort(vowels.begin(),vowels.end(),cmp);
        for(int i=0;i<indices.size();i++) {
            s[indices[i]]=vowels[i];
        }
        return s;
    }
};
