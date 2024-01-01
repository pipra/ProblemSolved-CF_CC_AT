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
	int n,k;	cin>>n>>k;
	string s;	cin>>s;
	int ans = 0 ;
	for( int i=0;i<n; ){
		if(s[i]=='B'){
			ans++;
			i+=k;
		}
		else	i++;
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
