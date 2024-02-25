// This is an optimal Solution using Monotonic Increasing Stack
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> finalPrices=prices;
        stack<int> st;

        for(int i=0;i<n;i++) {
            while(!st.empty() && prices[st.top()]>=prices[i]) {
                int index = st.top();
                st.pop();
                finalPrices[index]=prices[index]-prices[i];
            }

            st.push(i);
        }
        return finalPrices;
    }
};