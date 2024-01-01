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

bool pipra(){
	ll n;	cin>>n;

	for( int i=2;i*i<=n;i+=1 ){
		if( n%i==0 ){
			return false;
		}
	}
	
	return true;
}

int32_t main(){
	ios;
		cout<<pipra()<<endl;
}
