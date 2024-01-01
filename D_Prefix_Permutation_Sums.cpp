//PIPRA
#include<bits/stdc++.h>
using namespace std;

// typedef long long int;
#define int long long int
typedef vector<int> vi;
#define ff first
#define ss second
#define pb push_back
#define pop pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    int n;  cin>>n;
    vi a(n);
    set<int> s,d;

    for( int i=1; i<n ; ++i ){
        cin>>a[i];
        s.insert( i ) ;
    }
    a[0] = 0 ;      s.insert(n) ;

    for( int i=1;i<n ; ++i ){
        int diff = a[i]-a[i-1] ;
        if( s.count(diff) )     s.erase(diff);
        else                    d.insert(diff);
    }

    int need = 0 , extra = 0 ;
    for( auto &x : s )   need += x ;
    for( auto &x : d )   extra += x ;

    if( s.size()<=1 )                                           yes;
    else if( s.size()==2 && d.size()==1 && need == extra )      yes;
    else                                                        no;
}

signed main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}