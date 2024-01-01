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
	ll n;	cin>>n;
	ll a[n] , b[n] ;
	ll mn_a = INT_MAX , mn_b = INT_MAX ;
	ll sm_a = 0 , sm_b = 0 ;

	for( int i=0 ; i<n ; i++ ){
		cin>>a[i];
		sm_a += a[i] ;
		mn_a = min( mn_a , a[i] );
	}
	for( int i=0 ; i<n ; i++ ){
		cin>>b[i];
		sm_b += b[i] ;
		mn_b = min( mn_b , b[i] );
	}

	ll mn_sm_a = 0 , mn_sm_b = 0 ;
	for( int i=0 ; i<n ; i++ ){
		mn_sm_a += mn_a ;
		mn_sm_b += mn_b ;
	}

	ll res = min( mn_sm_a + sm_b , mn_sm_b + sm_a );
	cout<<res<<endl;

}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while( tt-- )
		pipra();
}
