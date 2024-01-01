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
	double r,xi,yi,xf,yf;	cin>>r>>xi>>yi>>xf>>yf;
	double diff = ( (xf-xi) * (xf-xi) ) + ( (yf-yi) * (yf-yi) ) ;
	double path = ceil(sqrt(diff)) ;
	int res = ceil(path/(2*r)) ;
	// cout<<diff<<" "<<path<<" ";
	cout<<res<<endl;
}

int32_t main(){
	ios;
		pipra();
}
