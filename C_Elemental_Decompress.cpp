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
#define  loop(i,a,b)       for( ll i=a;i<b;i++ )
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
    vll a(n);
    set<ll> p,q;
    vll ans1(n,-1), ans2(n,-1) ;
    vector<bool> pp(n+1,1) , qq(n+1,1) ;
    ll one=0;

    loop(i,0,n){
        cin>>a[i];
        p.insert(i+1);
        q.insert(i+1);
        if(a[i]==1)     one++;
    }

    // if(one>1){  cout<<"NO"<<endl;   return; }

    // vll p(n) , q(n) ;

    loop(i,0,n){
        ll val = a[i] ;
        if( pp[val] ){
            pp[val] = 0 ;
            ans1[i] = val ;
            p.erase(val) ;
        }
        else if( qq[val] ){
            qq[val] = 0 ;
            ans2[i] = val ;
            q.erase(val) ;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }

    loop(i,0,n){
        ll val=a[i] ;
        if( ans1[i]==-1 ){
            auto it=p.upper_bound(val) ;
            if( it==p.begin() ){    cout<<"NO"<<endl;   return; }
            it--;
            ans1[i] = (*it) ;
            p.erase(*it) ;
        }
        else if( ans2[i]==-1 ){
            auto it=q.upper_bound(val) ;
            if( it==q.begin() ){      cout<<"NO"<<endl;   return; }
            it--;
            ans2[i] = (*it) ;
            q.erase(*it) ;
        }
    }

    cout<<"YES"<<endl;

    for( auto i : ans1 )    cout<<i<<' ';
    cout<<endl;
    for( auto i : ans2 )    cout<<i<<' ';
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