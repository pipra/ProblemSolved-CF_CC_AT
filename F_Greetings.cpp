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
    pbds s;
    vp v;
    loop(i,1,n){
        ll x,y;     cin>>x>>y;
        v.pb({x,y});
        s.insert(y);
    }
    sort(all(v));
    ll ans=0;

    // for( auto i : s){
    //     cout<< i <<' ';
    // }
    // cout<<endl;

    for( auto i : v ){
        // cout<< i.ff << ' ' << i.ss <<endl;
        ans += s.order_of_key(i.ss) ;
        // cout << i.ss << ' ' << s.order_of_key(i.ss) <<endl;
        s.erase(i.ss) ;
    }

    cout << ans << endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}



/*
2 6
3 9
4 5
1 8
7 10
-2 100


-2  100
1   8
2   6
3   9
4   5
7   10

*/