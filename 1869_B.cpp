#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define fori(i,n) for(int i=0;i<n;i++)
#define ff first
#define ss second
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void pipra(){
	ll n,k,s,e;	cin>>n>>k>>s>>e;
	vector< pair<ll,ll> > v(n);
	--s;
	--e;

	for( int i=0;i<n;i++ ){
		ll x,y;	cin>>x>>y;
		v[i]={x,y};
	}

	ll ans = llabs(v[s].ff-v[e].ff) + llabs(v[s].ss-v[e].ss) ;
	// cout<<ans<<endl;

	ll da, db ;
	da=LONG_LONG_MAX/2;		db=LONG_LONG_MAX/2;

	for( int i=0;i<k;i++ ){
		da = min( da, llabs(v[s].ff-v[i].ff) + llabs(v[s].ss-v[i].ss) );
		db = min( db, llabs(v[e].ff-v[i].ff) + llabs(v[e].ss-v[i].ss) );
		// cout<<da<<" "<<db<<endl;
	}
	ans = min( ans, da+db );
	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
