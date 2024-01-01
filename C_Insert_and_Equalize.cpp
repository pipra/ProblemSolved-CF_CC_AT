//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef 	long long int 	ll;
typedef 	vector<int> 	vi;
typedef 	vector<ll> 		vii;
#define 	ff 		first
#define 	ss 		second
#define 	pb 		push_back
#define 	pop 	pop_back
#define 	yes 	cout<<"YES"<<endl
#define 	no 		cout<<"NO"<<endl
#define 	endl 	"\n"
#define 	all(x)  x.begin(),x.end()
#define 	FastIO 	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
    ll n;   cin>>n;
    vii a(n), diff ;
    for(ll &i : a)   cin>>i;
    if(n==1){   cout<<1<<endl;  return;   }
    sort(all(a));
    for( int i=0;i<n-1;i++ ){
        diff.pb(a[i+1]-a[i]) ;
    }
    ll g=diff[0] ;
    for(ll i : diff)    g = __gcd(i,g) ;
    ll ans = 0, last=a.back() ;

    for( auto i : a ){
        ans += (last-i) / g ;
        // cout<< ans << " ";
    }
    // cout<<endl;
    bool c=false ;      ll tmp ;
    for( int i=n-1 ; i>0 ; i-- ){
        tmp = a[i] - g ;
        if( tmp>a[i-1] ){
            ans += (last-tmp) /g ;
            c=true ;
            break;
        }
    }

    if(!c)      ans += (last-(a[0]-g)) /g ;

    cout<< ans <<endl;
}

int main(){
    //Code_by_Pipra
    FastIO;
    int tt;    cin>>tt;
    while(tt--)
        solve();
    return 0;
}