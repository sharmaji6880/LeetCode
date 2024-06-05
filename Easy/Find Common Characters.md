> **Problem Number:** 1002 <br>
> **Problem Name:** Find Common Characters <br>
> **Problem Link:** [https://leetcode.com/problems/find-common-characters/](https://leetcode.com/problems/find-common-characters/) <br>

    class Solution {
    public:
        vector<string> commonChars(vector<string>& words) {
            int n = words.size();

            vector< map<char,int> > arr(n);
            for(int i=0;i<n;i++) {
                for(int j=0;j<words[i].size();j++) {
                    arr[i][words[i][j]] ++;
                }
            }

            vector<string> ans;

            for(char c = 'a'; c <= 'z' ; c++) {
                bool flag = false;
                int count = INT_MAX;
                for(int i=0; i < arr.size(); i++) {
                    count = min(arr[i][c],count);
                }

                for(int i=0;i<count;i++) {
                    string s = "";
                    s+=c;
                    ans.push_back(s);
                }

            }
            return ans;
        }
    };