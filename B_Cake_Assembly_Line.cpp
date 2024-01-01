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
    ll n,w,h;   cin>>n>>w>>h;
    vp a ,b ;
    ll x;
    for( ll i=0;i<n;i++ ){
        cin>>x;
        a.pb( {x-w,x+w} );
    }
    for( ll i=0;i<n;i++ ){
        cin>>x;
        b.pb( {x-h,x+h} );
    }

    bool dont=true, left=false, right=false ;
    ll l_mx=0 , r_mx=0 ;

    for( ll i=0;i<n;i++ ){
        if( !(b[i].ff>=a[i].ff && b[i].ss<=a[i].ss) )
            dont=false;
        if( b[i].ff<a[i].ff ){
            left = true ;
            l_mx = max(l_mx, a[i].ff-b[i].ff ) ;
        }
        if( b[i].ss>a[i].ss ){
            right = true ;
            r_mx = max( r_mx , b[i].ss - a[i].ss ) ;
        }
    }

    if(dont){               yes;    return; }
    if(left and right){     no;     return; }

    if(left){
        for( ll i=0;i<n;i++ ){
            a[i].ff -= l_mx ;
            a[i].ss -= l_mx ;
        }
    }
    if(right){
        for( ll i=0;i<n;i++ ){
            a[i].ff += r_mx ;
            a[i].ss += r_mx ;
        }
    }

    bool check = true ;
    for( ll i=0;i<n;i++ ){
        if( !(b[i].ff>=a[i].ff && b[i].ss<=a[i].ss) )
            check=false;
    }

    if(check){      yes;    return; }
    no;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}