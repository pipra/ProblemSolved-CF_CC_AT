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
	int n,k;	cin>>n>>k;
	string s;	cin>>s;
	int l[k] , r[k] ;

	for( int i=0;i<k;i++ ){
		cin>>l[i];
	}
	for( int i=0;i<k;i++ ){
		cin>>r[i];
	}

	int q;	cin>>q;
	while( q-- ){

		int x;	cin>>x;
		int i=0;
		for( ;i<k;i++ ){
			if( x>=l[i] && x<=r[i] ){
				break;
			}
		}
		// cout<<i<<endl;
		int a,b;
		a= min( l[i]+r[i]-x , x );
		b= max( l[i]+r[i]-x , x );
		// cout<<a<<" "<<b<<endl;
		a--;
		b--;
		// reverse( s.begin()+a , s.begin()+b );

		for( ; a<b ; ){
			swap(s[a],s[b]);
			a++;
			b--;
		}
	}
	cout<<s<<endl;
}

int32_t main(){
	ios;
	int t;	cin>>t;
	while(t--)
		pipra();
}


// badc
// abedc
// gaf
// jihgedcdga
// a
