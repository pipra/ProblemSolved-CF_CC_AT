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
	vector<pair<int,int>> vp(n) ;
	for( int i=0 ; i<n ; i++ ){
		int x,y;	cin>>x>>y;
		vp[i] = {x,y};
	}
	for( int i=1 ; i<n ; i++ ){
		if( vp[i].first>=vp[0].first && vp[i].second>=vp[0].second ){
			cout<<-1<<endl;
			return;
		}
	}
	cout<<vp[0].first<<endl;
}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}
