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
    ll x,y,z;       cin>>x>>y>>z;
    // ll mx = max(a,max(b,c));
    cout<< (((y%2==1 and z%2==1) or (y%2==0 and z%2==0))? 1 : 0) <<" ";
    cout<< (((x%2==1 and z%2==1) or (x%2==0 and z%2==0))? 1 : 0) <<" ";
    cout<< (((y%2==1 and x%2==1) or (y%2==0 and x%2==0))? 1 : 0) <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}