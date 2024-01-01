#include<bits/stdc++.h>
using namespace std;

void dfs( vector<int> adj[] , vector<int> &ans , int node , int vis[] ){
    vis[node] = 1 ;
    ans.push_back(node);

    for( auto i : adj[node]){
        if(!vis[i]){
            dfs(adj , ans , i , vis );
        }
    }
}

void addEdge( vector<int> adj[] , int u , int v ){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[8];

    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    vector<int> ans ;
    int vis[7] = {0} ;

    dfs(adj , ans , 0 , vis) ;

    for( int i : ans ){
        cout<< i << " ";
    }
    cout<<endl;
}