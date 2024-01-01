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

	if(is_sorted(v.begin(),v.end())){
		cout<<0<<endl;
		return;
	}

	int start = 0 ;
	bool c = true ;
	int res = -1 ;
	fori(i,n-1){
		if( !c && v[i]>v[i+1] ){
			cout<<-1<<endl;
			return;
		}
		if( v[i]>v[i+1] && c){
			start = i+1 ;
			c=false ;
		}
		if( !c && v[i+1]>v[0] ){
			cout<<-1<<endl;
			return;
		}
	}
	cout<<n-start<<endl;
}

int32_t main(){
	ios;
		pipra();
}
