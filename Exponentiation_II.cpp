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

const   int    N = 2e5 + 5;
const   int    MX = 1e9 + 10;
const   ll     MXX = 1e18;

ll bc( ll a, ll b ){
    if(b==0){
        return 1;
    }
    ll half = bc(a,b/2) ;
    ll ans = half * half ;
    ans %= M ;
    if( b%2 ){
        ans *= a ;
    }
    return ans%M ;
}

ll ab( ll a , ll b ){
    if(b==0){
        return 1;
    }
    ll half = ab(a,b/2) ;
    ll ans = half * half ;
    ans %= (M-1) ;
    if( b%2 ){
        ans *= a ;
    }
    return ans%(M-1) ;
}

void pipra(){
    ll a,b,c;     cin>>a>>b>>c;
    ll aab = ab(b,c) ;
    cout<< bc(a,aab) <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}