#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> solution( int n , vector<int> adj[] ){
    int vis[n] = {0};
    vis[0] = 1 ;
    
    queue<int> q;
    q.push(1);

    vector<int> bfs ;

    while( !q.empty() ){
        int node = q.front();
        q.pop();

        bfs.pb(node) ;
        for( auto i : adj[node] ){
            if(!vis[i]){
                vis[i] = 1 ;
                q.push(i) ;
            }
        }
        queue<int> tmp = q ;
        // while(!tmp.empty()){
        //     int no = tmp.front();
        //     tmp.pop(); 
        //     cout<< no << " ";
        // }
        // cout<<endl;
    }
    return bfs;
}

void addEdge( vector<int> adj[] , int u , int v ){
    adj[u].pb(v);
    adj[v].pb(u);
}

int main(){
    vector<int> adj[7];

    addEdge(adj , 1 , 2);
    addEdge(adj , 1 , 5);
    addEdge(adj , 2 , 5);
    addEdge(adj , 2 , 3);
    addEdge(adj , 3 , 5);
    addEdge(adj , 3 , 4);
    addEdge(adj , 4 , 5);

    vector<int> bfs = solution(6,adj);

    // for( auto ii : adj ){
    //     // cout<< ii <<" ";
    //     for( auto i : ii){
    //         cout<< i << " ";
    //     }
    //     cout<<endl;
    // }

    for( int i : bfs ){
        cout<< i <<" ";
    }
    cout<<endl;

}