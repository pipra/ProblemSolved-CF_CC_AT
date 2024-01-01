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
const   int    MX = 1e6;
const   ll     MXX = 1e18;
vll d(MX+1) ;

//In this problem i need to preCalculate

void divisor(){
    for( ll i=1;i<=MX;i++ )
        for( ll j=i;j<=MX;j+=i )
            d[j]++;
}

void pipra(){
    ll n;   cin>>n;
    cout<< d[n] <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    divisor();
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}