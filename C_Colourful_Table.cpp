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
    ll n,k;	cin>>n>>k;
    vll a(n);
    set<ll> s;
    for( ll &i : a){		
    	cin>>i;
    	s.insert(i);
    }

    vll ans(k+1,0) ;
	ll l=0,r=n-1, ptr=1 ;

	while(l<=r){
		if( a[l]>=ptr and a[r]>=ptr ){
			ans[ptr] = 2 * (r-l+1) ;
			ptr++;
		}
		else if( a[l]<ptr )		l++;
		else					r--;
	}

	loop(i,1,k+1){
		if( !s.count(i) ){	cout<<0<<' ';	continue; }
		cout<< ans[i]<<' ';
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



// 4 
// 4 2 
// 0 6 6 2 0 
// 8 6 
// 10 6 2 
