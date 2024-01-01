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
	ll n,k;	cin>>n>>k;
	ll l = 1 , r=k*k ;
	ll res=-1;
	while( l<=r ){
		ll m = (r+l)/2 ;
		// cout<<m<<" ";
		if( (m-(m/n))==k && m%n!=0 ){
			res=m;
			break;
		}
		else if( (m-(m/n))>=k )	r=m-1;
		else	l=m+1;
	}
	// cout<<endl;
	cout<<res<<endl;
}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}


// 10
// 15
// 1999999999
// 113
// 1000000001
// 1
