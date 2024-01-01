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
    ll n;  cin >> n;
    vll a(n);
    for( ll &x : a)     cin>>x;

    ll ans = 0 ;
    sort(all(a));
    vll b;
    vector<bool> check(n,false);
    check[0] = 1 ;
    b.pb(a[0]);
    ll sum=a[0];

    ll i=1,j=n-1 ;
    
    for( ll i=1;i<n;i++ ){
        if(sum<a[i]){
            b.pb(a[i]);
            check[i]=1;
            sum += a[i] ;
        }
        else{
            ans++;
        }
    }

    for( int j=0;j<n;j++ ){
        if(!check[j]){
            b.pb(a[j]) ;
        }
    }

    cout<< ans <<endl;
    for( auto i : b){
        cout<< i <<' ';
    }
    cout<<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        pipra();
    return 0;
}