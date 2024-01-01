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
	ll pos=0 , neg = 0 , zero = 0 ;
	int mn,mnn;
	mnn = mn = INT_MAX ;

	for( int &x : v ){
		cin>>x;
		if( x==0 )	zero++;
		else if( x>0 ){
			pos += x ;
			mn = min( mn,x ) ;
		}
		else{
			neg -= x ;
			mnn = min( mnn , abs(x)) ;
		}
	}

	ll ans = 0 ;

	if( pos!=0 && neg!=0 ){
		ans = pos+neg ;
	}
	else if( pos==0 && neg!=0 ){
		if( zero==0 )	ans = neg - mnn -mnn ;
		else		ans = neg ;
	}
	else{
		if( zero==0 )	ans = pos - mn -mn ;
		else		ans = pos ;
	}

	cout<<ans<<endl;
}

int32_t main(){
	ios;
		pipra();
}
