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

void pipra(){
    ll n;   cin>>n;
    vll a(n),b(n),c(n) ;
    for( auto &x : a)   cin>>x;
    for( auto &x : b)   cin>>x;
    for( auto &x : c)   cin>>x;

    vp aa, bb , cc ;
    for( ll i=0;i<n;i++ ){
        aa.pb({a[i],i}) ;
        bb.pb({b[i],i}) ;
        cc.pb({c[i],i}) ;
    }

    sort(all(aa));
    sort(all(bb));
    sort(all(cc));

    ll ans = 0 ;
    
    loop2(i,n-1,n-3){
        loop2(j,n-1,n-3){
            loop2(k,n-1,n-3){
                if( aa[i].ss!=bb[j].ss && bb[j].ss != cc[k].ss && cc[k].ss != aa[i].ss ){
                    ans = max( ans , aa[i].ff + bb[j].ff + cc[k].ff ) ;
                }
            }
        }
    }

    cout<<ans<<endl;

}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}