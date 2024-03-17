> **Problem Number:** 3083 <br>
> **Problem Name:**  Existence of a Substring in a String and Its Reverse <br>
> **Link:** [https://leetcode.com/problems/existence-of-a-substring-in-a-string-and-its-reverse/](https://leetcode.com/problems/existence-of-a-substring-in-a-string-and-its-reverse/) <br>

    class Solution {
    public:
        bool isSubstringPresent(string s) {
            if(s.size() == 1) {
                return false;
            }
            string reverse = "";
            for(int i=s.size()-1;i>=0;i--) {
                reverse.push_back(s[i]);
            }
            set<string> s1;
            for(int i=0;i<s.size()-1;i++) {
                s1.insert(s.substr(i,2));
            }
            for(int i=0;i<reverse.size()-1;i++) {
                if(s1.count(reverse.substr(i,2))) {
                    return true;
                }
            }
            return false;
        }
    };