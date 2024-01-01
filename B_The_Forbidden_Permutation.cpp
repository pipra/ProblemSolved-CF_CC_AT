//Code never lies, LET'S START
#include<bits/stdc++.h>
using namespace std;

#define  ll                long long int
#define  ff                first
#define  ss                second
#define  pb                push_back
#define  yes               cout<<"YES"<<endl
#define  no                cout<<"NO"<<endl
#define  endl              "\n"
#define  all(x)            x.begin(),x.end()
#define  loop(i,a,b)       for( ll i=a;i<=b;i++ )
#define  loop2(i,b,a)      for( ll i=b;i>=a;i-- )
#define  M                 1000000007
#define  vll               vector<ll>
#define  pll               pair<ll,ll>
#define  vp                vector<pll>
#define  FastIO            ios_base::sync_with_stdio(false); cin.tie(NULL);

const   int    N = 2e5 + 5;
const   int    MX = 1e9 + 10;
const   ll     MXX = 1e18;

void pipra(){
    ll n,m,d;   cin>>n>>m>>d;
    vll pos(n+1), a(m) ;
    loop(i,1,n){
        ll x;   cin>>x;
        pos[x] = i ;
    }
    for( ll &e : a )    cin>>e;

    ll ans=MXX;
    loop(i,0,m-2){
        if( (pos[a[i]]<pos[a[i+1]]) and ( (pos[a[i]]+d) >= pos[a[i+1]]) ){
            ans = min( pos[a[i+1]]-pos[a[i]] , ans ) ;
            if( d+1<n ){
                ans = min( (pos[a[i]]+d)-(pos[a[i+1]]-1) , ans ) ;
            }
        }
        else{
            cout<<0<<endl;      return;
        }
    }
    // else{
    //     ans = 0 ;
    // }

    cout<< ans <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}