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
	ll a[n];
	// ll sum = 0;
	for( int i=0;i<n;i++ ){
		cin>>a[i];
		// sum += a[i];
	}
	ll l=1 , r=n-1;
	ll alice = a[0] , bob = 0 ;
	ll mx_alice = a[0] , mx_bob = 0 ;
	int count = 1 ;
	ll s=0 ;

	while( l<=r ){
		// s=0;
		while(s<=mx_alice && l<=r){
			s += a[r];
			r--;
		}
		if(l<=r && s>mx_alice){
			count++;
			bob += s;
			mx_bob = s;
			s=0;
		}
		// if()
		// s=0;
		while(s<=mx_bob && l<=r){
			s += a[l];
			l++;
		}
		if(l<=r && s>mx_bob){
			count++;
			alice += s;
			mx_alice = s;
			s=0;
		}
	}
	if( s!=0 ){
		if( count%2==0 )	alice += s;
		else	bob += s;
		count++;
	}
	// cout<<s<<endl;

	cout<<count<<" "<<alice<<" "<<bob<<endl;

}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}


// 6 23 21
// 1 1000 0
// 2 1 2
// 6 45 46
// 2 2 1
// 3 4 2
// 4 4 3

