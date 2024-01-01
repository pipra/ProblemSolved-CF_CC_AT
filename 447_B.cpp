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
	string s;	cin>>s;
	int k;	cin>>k;
	vi v(26) ;
	int mx = INT_MIN ;
	ll res = 0 ;

	fori(i,26){
		cin>>v[i] ;
		mx = max(mx,v[i]) ;
	}
	int multi = 0 ;
	fori(i,s.size()){
		res += (++multi) * v[s[i]-'a']; 
	}

	fori(i,k){
		res += (++multi) * mx ;
	}

	cout<<res<<endl;
}

int32_t main(){
	ios;
		pipra();
	return 0;
}
