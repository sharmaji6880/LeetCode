class Solution {
public:
    bool detectCapitalUse(string word) {
      int count1=0,count2=0;
      for(auto x:word) {
          if(x-65>=0 && x-65<=25) {
              count1++;
          }
          else {
              count2++;
          }
      } 
      if(count1==0 || count2==0) {
          return true;
      }
      else {
          if(count2==word.size()-1 && count1==1 && word[0]-65>=0 && word[0]-65<=25) {
              return true;
          }
      }
      return false;
    }
};
