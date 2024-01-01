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

int n,m;
int N = 1005 ;
int a[1002][1002] ;
int vis[1002][1002] ;


int dfs( int i, int j ){
    vis[i][j] = 1 ;
    int ans = a[i][j] ;

    if( i!=0 && !vis[i-1][j] && a[i-1][j]!=0 ){
        ans += dfs(i-1,j) ;
    }
    if( i!=n-1 && !vis[i+1][j] && a[i+1][j]!=0 ){
        ans += dfs(i+1,j) ;
    }
    if( j!=0 && !vis[i][j-1] && a[i][j-1]!=0 ){
        ans += dfs(i,j-1) ;
    }
    if( j!=m-1 && !vis[i][j+1] && a[i][j+1]!=0 ){
        ans += dfs(i,j+1) ;
    }
    return ans ;
}

void solve(){
    // int n,m;    cin>>n>>m;
    cin>>n>>m;
    for( int i=0;i<n;i++ ){
        for( int j=0;j<m;j++ ){
            vis[i][j] = 0 ;
            cin>>a[i][j];
        }
    }
    int ans = 0 ;

    int i=0,j=0;
    for( int i=0;i<n;i++ ){
        j=0;
        for(;j<m;j++ ){
            if( !vis[i][j] && a[i][j]>0 ){
                ans = max(ans , dfs(i,j) ) ;
            }
        }
    }

    cout<< ans <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}