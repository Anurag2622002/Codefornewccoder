#include "bits/stdc++.h"
using namespace std;

const int INF = 1e9;

int main(){
    int n,m;cin>>n>>m;
    vector<vector<int>> edges;
    cout<<"u v w"<<endl;
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    cout<<endl;
    cout<<"SOURCE : "<<endl;
    int src; cin>>src;
    vector<int> dist(n,INF);
    dist[src] = 0;
    for (int iter = 0; iter < n-1; iter++)
    {
        bool change = false;

        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];

            //for detection of cycle
            if(dist[v] > w + dist[u]){
                change = true;
            }
            dist[v] = min(dist[v], w + dist[u]);
        }
    }
    cout<<"VERTEX     DISTANCE FROM SOURCE"<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"              "<<dist[i]<<endl;
    }
    cout<<endl;
    
    return 0;
}

// 5 8   
// 1 2 3
// 3 2 5
// 1 3 2
// 3 1 1
// 1 4 2
// 0 2 4
// 4 3 -3
// 0 1 -1
// 0
// 0 -1 2 -2 1 