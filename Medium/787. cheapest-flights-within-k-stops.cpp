// This is a brute force recursive approach
// It only works for very small inputs
class Solution {
public:
    int stops;
    int cost;
    vector<int> costs;
    vector<bool> visited;
    void func(vector<vector<int>> graph, int n, int src, int dst, int k) {
        visited[src]=true;
        for(int i=0;i<n;i++) {
            if(graph[src][i]!=0 && !visited[i]) {
                cost+=graph[src][i];
                stops+=1;
                visited[i]=true;
                if(i==dst) {
                    if(stops-1 <= k) {
                        costs.push_back(cost);
                    }
                    cost-=graph[src][i];
                    stops-=1;
                    visited[i]=false;
                    continue;
                }
                func(graph,n,i,dst,k);
                cost-=graph[src][i];
                stops-=1;
                visited[i]=false;
                
            }
        }
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<int>> graph(n,vector<int>(n,0));
        for(int i=0;i<flights.size();i++) {
            graph[flights[i][0]][flights[i][1]] = flights[i][2];
        }
        for(int i=0;i<n;i++) {
            visited.push_back(false);
        }

        /*for(auto x:graph) {
            for(auto y:x) {
                cout<<y<<"\t";
            }
            cout<<endl;
        }*/
        this -> stops=0;
        this -> cost=0;
        this -> costs = {};
        func(graph,n,src,dst,k);
        cout<<"Size:"<<costs.size()<<endl;
        int Max = INT_MAX;
        for(auto x:costs) {
            if(x<Max) {
                Max=x;
            }
        }
        if(Max==INT_MAX) {
            return -1;
        }

        return Max;
    }

};