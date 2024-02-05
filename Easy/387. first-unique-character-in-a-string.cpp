class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m1,m2;
        for(int i=0;i<(int)s.size();++i) {
            m1[s[i]]++;
        }
        map<char,int>::iterator it;
        for(it=m1.begin();it!=m1.end();++it) {
            if(it->second==1) {
                m2[it->first]=it->second;
            }
        }
        for(int i=0;i<(int)s.size();++i) {
            if(m2.count(s[i])) {
                return i;
            }
        }
        return -1;
    }
};