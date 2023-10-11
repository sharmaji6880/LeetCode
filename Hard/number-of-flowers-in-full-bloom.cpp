class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n=people.size();
        vector<int> answer;
        for(int i=0;i<n;i++) {
            int count=0;
            for(int j=0;j<flowers.size();j++) {
                if(people[i]>=flowers[j][0] && people[i]<=flowers[j][1]) {
                    count++;
                }
            }
            answer.push_back(count);
        }
        return answer;
    }
};
