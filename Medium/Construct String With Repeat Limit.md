> **Problem Number:** 2182 <br>
> **Problem Name:** Construct String With Repeat Limit <br>
> **Problem Link:** [https://leetcode.com/problems/construct-string-with-repeat-limit](https://leetcode.com/problems/construct-string-with-repeat-limit) <br>

    class Solution {
    public:
        static bool cmp( char a , char b ) {
            return a > b;
        }
        int binarySearch(string &s, int l , int r , char c ) {
            int index = -1, mid;
            while( l <= r ) {
                mid = (l+r)/2;
                if( s[mid] < c ) {
                    index = mid;
                    r = mid - 1;
                }else if( s[mid] == c ) {
                    l = mid + 1;
                }
            }
            return index;
        }
        string repeatLimitedString(string s, int repeatLimit) {
            sort(s.begin(),s.end(),cmp);
            string str = "";
            int n = s.size(), prev = 0, index;
            for(int i=0;i<n;i++) {
                if( str.empty() ) {
                    str.push_back(s[i]);
                    continue;
                }
                if( s[i] != str.back() ) {
                    prev = i;
                    str.push_back(s[i]);
                }else {
                    if( i - prev + 1 <= repeatLimit ) {
                        str.push_back(s[i]);
                    }else {
                        index = binarySearch(s,i+1,n-1,s[i]);
                        if( index == -1 ) {
                            break;
                        }
                        swap(s[index],s[i]);
                        str.push_back(s[i]);
                        prev = i;
                    }
                }
            }
            return str;
        }
    };