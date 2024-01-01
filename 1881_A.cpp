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
	int n,m;	cin>>n>>m;
	string x,a;	cin>>x>>a;

	int c=0;	bool b=false;
	while(x.size()<100){
		if( x.find(a)!=-1 ){
			cout<<c<<endl;
			return;
		}
		x += x ;
		c++;
	}
	cout<<-1<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}

// 3
// 1
// 2
// -1
// 1
// 0
// 1
// 3
// 1
// 0
// 2
// 5
