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
	int n,k,x;	cin>>n>>k>>x;

	if( k>n || k>x+1 )
		cout<<-1<<endl;
	else{
		ll ans = ((k-1)*k) / 2 ;
		if( k==x )	ans += (n-k)*(x-1) ;
		else	ans += x*(n-k) ;
		cout<<ans<<endl;
	}
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
