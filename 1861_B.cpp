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
	string a,b;	cin>>a>>b;
	int n=a.size();
	bool c=false;
	for( int i=0;i<n-1;i++ ){
		if( a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && a[i+1]=='1' ){
			c=true;
			break;
		}
	}
	if(c)	yes;
	else	no;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
