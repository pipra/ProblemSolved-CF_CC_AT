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
	vi v(n);
	fori(i,n)	cin>>v[i];

	ll res = v[0] + 1 ;
	for(int i=1;i<n;i++){
		if( v[i]==v[i-1] ){
			res += 2 ;
		}
		else{
			res += abs(v[i]-v[i-1]) + 2 ;
		}
	}
	cout<<res<<endl;
}

int32_t main(){
	ios;
		pipra();
}
