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
	ll in = 3 ;
	ll a[n] ;

	for( ll i=0 ; i<n ; i++ ){
		a[i] = in ; 
		in += 2 ;
	}

	for( ll i=0 ; i<n ; i++ ){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int32_t main(){
	ios;
	int t;	cin>>t;
	while(t--)
		pipra();
}
