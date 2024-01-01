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
	ll n,mx;	cin>>n>>mx;
	vector<ll> v(n);
	for(auto &x : v){
		cin>>x;
	}
	ll left=1,right=10E9;
	ll ans = -1 ;
	while( left<=right ){
		ll m=left+(right-left)/2 ;
		ll sum = 0 ;
		for( auto &x : v){
			if(m>x)
				sum += (m-x) ;
		}

		if(sum<=mx){
			ans=m;
			left = m+1;
		}
		else	right = m-1;
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
