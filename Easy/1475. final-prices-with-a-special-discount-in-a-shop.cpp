// This is a Brute Force Approach
// For larger inputs, it might result into TLE
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> finalPrices = prices;

        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(prices[j] <= prices[i]) {
                    finalPrices[i] = prices[i]-prices[j];
                    break;
                }
            }
        }
        return finalPrices;
    }
};

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