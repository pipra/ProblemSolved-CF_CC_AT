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
	ll n,k,lagbe ;
	cin>>n>>k>>lagbe ;
	ll mx_lagbe , mn_lagbe ;

	ll tm = (n-k) ;

	mx_lagbe = (n*(n+1)) - (tm*(tm+1)) ;
	mx_lagbe /=2 ;

	mn_lagbe = (k*(k+1)) /2 ;

	if( lagbe<=mx_lagbe && lagbe>=mn_lagbe ){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	// cout<<mx_lagbe<<" "<<mn_lagbe<<endl;
}

int32_t main(){
	ios;
	int t;	cin>>t;
	while( t-- )
		pipra();
}
