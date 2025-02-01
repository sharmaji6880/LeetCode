> **Problem Number:** 869 <br>
> **Problem Name:** Reordered Power of 2 <br>
> **Problem Link:** [https://leetcode.com/problems/reordered-power-of-2](https://leetcode.com/problems/reordered-power-of-2) <br>

    class Solution {
    public:
        bool isPermutationPossible(string source, string target) {
            if(source.size()!=target.size()) return false;
            vector<int> count(10,0);
            for(int i=0;i<source.size();i++) {
                count[source[i]-'0']++;
                count[target[i]-'0']--;
            }
            return count == vector<int>(10,0)? true:false;
        }
        bool reorderedPowerOf2(int n) {
            int min, max;
            string sourceString = to_string(n), targetString;
            string s = sourceString;
            sort(s.begin(),s.end());
            min = stoi(s);
            reverse(s.begin(),s.end());
            max = stoi(s);
            
            int minLog = log2(min), maxLog = log2(max);

            for(int i=minLog;i<=maxLog;i++) {
                targetString = to_string((int) pow(2,i));
                if(isPermutationPossible(sourceString,targetString)) return true;
            }
            
            return false;
        }
    };