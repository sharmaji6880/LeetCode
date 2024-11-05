> **Problem Number:** 1154 <br>
> **Problem Name:** Day of the Year <br>
> **Problem Link:** [https://leetcode.com/problems/day-of-the-year](https://leetcode.com/problems/day-of-the-year) <br>

    class Solution {
    public:
        bool isLeap(int year) {
            if( year % 400 == 0) {
                return true;
            }
            if( year % 100 == 0) {
                return false;
            }
            if(year % 4 == 0 ) {
                return true;
            }
            return false;
        }

        int numOfDays(int month, int year) {
            if(month == 2) {
                if( isLeap(year) ) {
                    return 29;
                }else {
                    return 28;
                }
            }else if( month <= 7) {
                if( month % 2) {
                    return 31;
                }else {
                    return 30;
                }
            }else if(month >= 8) {
                if(month %2) {
                    return 30;
                }else {
                    return 31;
                }
            }
            return 0;
        }

        int dayOfYear(string date) {
            int year = stoi(date.substr(0,4));
            int month = stoi(date.substr(5,2));
            int day = stoi(date.substr(8,2));
            int ans = 0;

            for(int i=1;i<month;i++) {
                ans += numOfDays(i,year);
            }
            ans += day;
            return ans;
        }
    };