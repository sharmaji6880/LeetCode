> **Problem Number:** 165 <br>
> **Problem Name:** Compare Version Numbers <br>
> **Problem Link:** [https://leetcode.com/problems/compare-version-numbers/](https://leetcode.com/problems/compare-version-numbers/) <br>

    class Solution {
    public:
        int compareVersion(string version1, string version2) {
            vector<string> revisions1,revisions2;
            int prev = 0;
            for(int i=0;i<version1.size();i++) {
                if(i == version1.size()-1) {
                    revisions1.push_back(version1.substr(prev, i-prev+1));
                    continue;
                }
                if(version1[i] != '.') {
                    continue;
                }
                revisions1.push_back(version1.substr(prev,i-prev));
                prev = i+1;
            }
            prev = 0;
            for(int i=0;i<version2.size();i++) {
                if(i == version2.size()-1) {
                    revisions2.push_back(version2.substr(prev, i-prev+1));
                    continue;
                }
                if(version2[i] != '.') {
                    continue;
                }
                revisions2.push_back(version2.substr(prev,i-prev));
                prev = i+1;
            }
            int n1 = revisions1.size();
            int n2 = revisions2.size();
            if(n1 > n2) {
                for(int i=0;i<n1-n2;i++) {
                    revisions2.push_back("0");
                }
            }
            else if(n1 < n2) {
                for(int i=0;i<n2-n1;i++) {
                    revisions1.push_back("0");
                }
            }
            int i = 0, j = 0;
            while(i < revisions1.size()) {
                int num1,num2;
                num1 = stoi(revisions1[i]);
                num2 = stoi(revisions2[j]);

                if(num1 > num2) {
                    return 1;
                }else if(num1 < num2) {
                    return -1;
                }
                i++;
                j++;

            }
            return 0;

        }
    };