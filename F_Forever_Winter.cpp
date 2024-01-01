//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef 	long long int 	ll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vii;
#define 	ff 		first
#define 	ss 		second
#define 	pb 		push_back
#define 	pop 	pop_back
#define 	yes 	cout<<"YES"<<endl
#define 	no 		cout<<"NO"<<endl
#define 	endl 	"\n"
#define 	all(x)  x.begin(),x.end()
#define 	FastIO 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n,m;    cin>>n>>m;
    int N = n+1 ;
    // vector<int> adj[N] ;
    vector<int> cnt(N,0) ;

    // int u,v ;
    for( int i=0;i<m;i++ ){
        int u,v;    cin>>u>>v;
        cnt[u]++;
        cnt[v]++;
    }
    int c = 0 ;
    for( int i=1;i<N;i++ ){
        if( cnt[i]==1 ){
            ++c;
        }
    }
    
    int x = n-c-1 ;
    int y = c/x ;

    cout<< x << " " << y <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}