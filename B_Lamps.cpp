//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define ff first
#define ss second
#define pb push_back
#define pop pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;  cin>>n;
    vector<vi> aa(n+1);
    
    for( int i=0 ; i<n ; ++i ){
        int x,y;    cin>>x>>y;
        aa[x].pb( y ) ;
    }

    ll ans = 0 , i = 1 ;

    for( int i=1 ; i<=n ; ++i ){
        sort( aa[i].begin() , aa[i].end() , greater<int>() ) ;
        int k = 0 ;
        for( int &c : aa[i] ){
            if( k<i )
                ans += c ;
            else
                break;
            k++;
        }
    }

    cout<<ans<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}