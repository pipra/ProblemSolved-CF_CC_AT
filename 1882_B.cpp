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
	vector< vector<int> > vv( n );
	set<int> st ;
	vector<bool> vis(51,0) ;

	for( int i=0 ; i<n ; i++ ){
		int k;	cin>>k;
		while( k-- ){
			int x;	cin>>x;
			st.insert(x);
			vv[i].pb(x);
			vis[x] = 1 ;
		}
	}

	int res = 0 ;

	for( int i=1 ; i<=50 ; i++ ){
		set<int> ss;
		if( vis[i] & 1 ){
			for( int j=0 ; j<n ; j++ ){
				int c=1 ;
				for( auto x : vv[j] ){
					if(i==x){
						c=0 ;
						break;
					}
				}
				if(c & 1){
					for( auto m : vv[j] ){
						ss.insert(m);
					}
				}
			}
		}
		if( ss.size()>res )
			res = ss.size();
	}

	cout<<res<<endl;

	
}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}
