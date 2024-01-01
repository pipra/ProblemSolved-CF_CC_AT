//Code never lies, LET'S START
#include<bits/stdc++.h>
using namespace std;

#define  ll                long long int
#define  ff                first
#define  ss                second
#define  pb                push_back
#define  ppb               pop_back
#define  mp                make_pair
#define  yes               cout<<"YES"<<endl
#define  no                cout<<"NO"<<endl
#define  endl              "\n"
#define  all(x)            x.begin(),x.end()
#define  loop(i,a,b)       for( ll i=a;i<=b;i++ )
#define  loop2(i,b,a)      for( ll i=b;i>=a;i-- )
#define  sz(x)             (ll)x.size()
#define  M                 1000000007
#define  vll               vector<ll>
#define  pll               pair<ll,ll>
#define  vp                vector<pll>
#define  FastIO            ios_base::sync_with_stdio(false); cin.tie(NULL);

const   int    N = 1e6 + 1;
const   int    MX = 1e9 + 10;
const   ll     MXX = 1e18;
vector<ll> multi(N) ;

void bionomial(){
    multi[0] = 1 ;
    ll m = 1 ;
    for( ll i=1;i<N;i++ ){
        m *= i ;
        m %= M ;
        multi[i] = m ;
    }
}

void pipra(){
    ll n,m;     cin>>n>>m;
    ll ans = multi[n] ;
    ans /= multi[m] ;
    ans /= multi[n-m] ;
    cout<<ans<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    bionomial();
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}