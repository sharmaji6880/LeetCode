// In this approach, we stored the frequencies of each letter of the target word in a map
// Then for each string in the array, we calculated the frequencies of appearances of each letter in that string
// If the frequency of each letter in that string is less than or equal to the frequency of the same letter in the target string, then the target string 
// can be formed using that string. So, we add the length of the string to the ans variable
// Finally we return the ans variable
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int> m1;
        for(auto x:chars) {
            m1[x]++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++) {
            map<char,int> m2;
            int flag=0;
            for(auto x:words[i]) {
                m2[x]++;
            }
            for(auto x:m2) {
                if(x.second <= m1[x.first]) {
                    continue;
                }
                flag=1;
                break;
            }
            if(flag) {
                continue;
            }
            ans+=words[i].size();
        }
        return ans;
    }
};
