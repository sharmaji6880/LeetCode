class Solution {
public:
    static int numOfBits(int n) {
        int count=0;
        while(n) {
            if(n%2) {
                count+=1;
            }
            n/=2;
        }
        return count;
    }
    static bool cmp(int a,int b) {
        if(numOfBits(a) < numOfBits(b)) {
            return true;
        }else if(numOfBits(a) == numOfBits(b)) {
            if(a<=b) {
                return true;
            }
            return false;
        }
        return false;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),cmp);
        return arr;
    }
};
