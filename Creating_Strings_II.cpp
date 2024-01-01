//Code never lies, LET'S START
#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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
#define  sz(x)             (ll)x.size()
#define  M                 1000000007
#define  vll               vector<ll>
#define  pll               pair<ll,ll>
#define  vp                vector<pll>
#define  FastIO            ios_base::sync_with_stdio(false); cin.tie(NULL);

const   int    N = 1e6;
const   int    MX = 1e9 + 10;
const   ll     MXX = 1e18;

ll lcm(ll a, ll b){	return ((a*b)/__gcd(a,b));	}

// vll multi(N+1) ;


// void count(){
//     ll product = 1 ;

//     loop(i,1,N){
//         product *= i ;
//         product %= M ;
//         multi[i] = product ;
//     }
// }

void pipra(){
    string s;   cin>>s;
    ll n = (ll)s.size();
    vll cnt(26,0) ;
    for( char i : s)    cnt[i-'a']++ ;

    ll product = 1 ;
    vll multi(n+1) ;
    multi[0] = 1 ;
    loop(i,1,n){
        product *= i ;
        product %= M ;
        multi[i] = product ;
    }

    ll ans = multi[n] ;
    for( ll i : cnt ){
        ans /= multi[i] ;
    }

    cout<< ans <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
        pipra();
    return 0;
}