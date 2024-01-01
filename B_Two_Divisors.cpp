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

const   int    N = 2e5 + 5;
const   int    MX = 1e9 + 10;
const   ll     MXX = 1e18;

ll lcm(ll a, ll b){	return ((a*b)/__gcd(a,b)) ;   }

void pipra(){
    ll a,b;     cin>>a>>b;
    ll lcmm = lcm(a,b) ;
    if( lcmm==b ){
        cout<< lcmm * (b/a) <<endl ;
    }
    else{
        cout<< lcmm <<endl;
    }
}

int main(){
    //Code_by_Pipra
    FastIO;
    ll tt;  cin>>tt;
    while(tt--)
        pipra();
    return 0;
}