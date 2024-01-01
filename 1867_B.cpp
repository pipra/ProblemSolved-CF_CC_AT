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
	string s;	cin>>s;

	int l=0, r=n-1;
	int need = 0, good=0;
	while(l<r){
		if(s[l]==s[r])	good +=2;
		else	need++;
		l++;	r--;
	}

	string ans = "";
	char zero='0', one='1';

	for( int i=0;i<=n;i++ ){
		int ache = i ;
		ache -=need;
		if(ache<0){
			ans+=zero;
			continue;
		}
		else{
			ache = max( (ache%2) , ache-good );
			ache = max( 0, ache - (n%2) ) ;

			if(ache==0)	ans+=one;
			else		ans+=zero;
		}
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
