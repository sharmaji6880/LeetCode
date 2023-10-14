class Solution {
public:
    int hamming(int m,int n) {
        string str1="",str2="";
        while(n) {
            if(n%2) {
                str1+='1';
            }else {
                str1+='0';
            }
            n/=2;
        }
        while(m) {
            if(m%2) {
                str2+='1';
            }else {
                str2+='0';
            }
            m/=2;
        }
        int size1=str1.size();
        int size2=str2.size();
        int difference = abs(size1-size2);
        for(int i=0;i<size1/2;i++) {
                char temp=str1[i];
                str1[i]=str1[size1-i-1];
                str1[size1-i-1]=temp;
            }
            for(int i=0;i<size2/2;i++) {
                char temp=str2[i];
                str2[i]=str2[size2-i-1];
                str2[size2-i-1]=temp;
            }
        if(size1 >= size2) {
            string s="";
            for(int i=0;i<difference;i++) {
                s.push_back('0');
            }
            str2=s+str2;
        }else {
            string s="";
            for(int i=0;i<difference;i++) {
                s.push_back('0');
            }
            str1=s+str1;
        }
        int count=0;
        for(int i=0;i<max(size1,size2);i++) {
            if(str1[i]!=str2[i]) {
                count++;
            }
        }
        return count;
    }
    int totalHammingDistance(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size()-1;i++) {
            for(int j=i+1;j<nums.size();j++) {
                sum+=hamming(nums[i],nums[j]);
            }
        }
        return sum;
    }
};
