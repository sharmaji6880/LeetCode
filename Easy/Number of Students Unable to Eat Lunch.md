> **Problem Number:** 1700 <br>
> **Problem Name:** Number of Students Unable to Eat Lunch <br>
> **Problem Link:** [https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/](https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/) <br>

    class Solution {
    public:
        int countStudents(vector<int>& students, vector<int>& sandwiches) {
            map<int,int> m;
            for(auto x:students) {
                m[x]++;
            }

            while(!students.empty()) {
                if(students[0] == sandwiches[0]) {
                    m[students[0]]--;
                    students.erase(students.begin());
                    sandwiches.erase(sandwiches.begin());
                }
                else {
                    if(m[sandwiches[0]] == 0) {
                        return students.size();
                    }else {
                        int ele = students[0];
                        students.erase(students.begin());
                        students.push_back(ele);
                    }
                }
            }
            return 0;
        }
    };