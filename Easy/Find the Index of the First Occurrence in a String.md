> **Problem Number:** 28 <br>
> **Problem Name:** Find the Index of the First Occurrence in a String <br>
> **Problem Link:** [https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string) <br>

**Naive Approach:** <br>

    class Solution {
    public:
        int strStr(string haystack, string needle) {
            int len1=haystack.size();
            int len2=needle.size();
            if(len1<len2) {
                return -1;
            }
            else {
                for(int i=0;i<=len1-len2;i++) {
                    if(haystack.substr(i,len2)==needle) {
                        return i;
                    }
                }
                return -1;
            }
        }
    };

**KMP Algorithm:** <br>

    class Solution {
    public:
        int strStr(string haystack, string needle) {
            int n=needle.size();
            vector<int> lps(n,0);
            int prev=0,i=1,j;
            
            while(i<needle.size()) {
                if(needle[i]==needle[prev]){
                    lps[i]=prev+1;
                    prev+=1;
                    i+=1;
                }else if(prev==0){
                    lps[i]=0;
                    i+=1;
                }else{
                    prev=lps[prev-1];
                }
            }
            i=0,j=0;
            while(i<haystack.size()) {
                if(haystack[i]==needle[j]) {
                    i++;
                    j++;
                }else if(j==0) {
                    i++;
                }else {
                    j = lps[j-1]; 
                }
                if(j==needle.size()){
                    return i-needle.size();
                }
            }
            return -1;
        }   
    };