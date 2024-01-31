class Solution {
public:
    vector<int> dailyTemperatures(vector<int> &arr) {
       stack<int> s;
       vector<int> ans(arr.size());
       for(int i=0;i<(int)arr.size();i++) {
           while(!s.empty() && arr[s.top()]<arr[i]) {
               int index=s.top();
               s.pop();
               ans[index]=i-index;
           }
           s.push(i);
       }
       return ans;
    }
};
