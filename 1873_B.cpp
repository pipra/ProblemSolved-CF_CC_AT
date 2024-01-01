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
	int n;	cin>>n;
	vector<int> v(n);
	int mn = 10 , ind=-1,i=0 ;
	for( auto &x : v){
		cin>>x;
		if(x<mn){
			mn=x;
			ind=i;
		}
		i++;
	}
	v[ind]++;
	int ans=1 ;
	for(auto &x : v){
		ans *=x;
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
