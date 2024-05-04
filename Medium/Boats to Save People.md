> **Problem Number:** 881 <br>
> **Problem Name:** Boats to Save People <br>
> **Problem Link:** [https://leetcode.com/problems/boats-to-save-people/](https://leetcode.com/problems/boats-to-save-people/) <br>

    class Solution {
    public:
        int numRescueBoats(vector<int>& people, int limit) {
            sort(people.begin(),people.end());
            int i = 0, j = people.size()-1;
            int count = 0;
            while(i<=j) {
                if(i==j) {
                    count+=1;
                    break;
                }
                if(people[i] + people[j] > limit) {
                    count+=1;
                    j--;
                }else {
                    count+=1;
                    i++;
                    j--;
                }
            }
            return count;
        }
    };