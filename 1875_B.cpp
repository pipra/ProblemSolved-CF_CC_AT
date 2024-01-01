#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define fori(i,n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void pipra(){
	ll n,m,k;	cin>>n>>m>>k;
	vector<ll> v(n), vv(m);
	ll sm = 0;

	for( auto &x : v){
		cin>>x;
		sm += x;
	}

	for( auto &x : vv)	cin>>x;

	sort( v.begin(),v.end() );
	sort( vv.begin(),vv.end() , greater<ll>() );

	ll ans = sm ;
	if( k%2 ){
		if( v[0]<vv[0] ){
			ans += vv[0];
			ans -= v[0];
		}
	}
	else{
		if( v[0]<vv[0] ){
			sm += vv[0];
			sm -= v[0];
			swap(v[0],vv[0]);
		}
		sort( v.begin(),v.end(), greater<ll>() );
		sort( vv.begin(),vv.end() );
		if( v[0]>vv[0] ){
			sm -= v[0];
			sm += vv[0];
		}
		ans = sm;
	}

	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}

// 6
// 1
// 19
// 2

