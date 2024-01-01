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
	vector<int> a(n+1), b(n+1);
	map<int,int> aa, bb;

	fori( i,n )		cin>>a[i];
	fori( i,n )		cin>>b[i];

	a[n]=0;		b[n]=0;

	int mxx= *max_element( a.begin(),a.end() );
	int mxxx= *max_element( a.begin(),a.end() );
	int mxxxx = max( mxxx,mxx );
	int c=1 ;

	for( int i=0;i<n;i++ ){
		if( a[i]!=a[i+1] ){
			c=1;
			aa[ a[i] ] = max( aa[a[i]],c );
		}
		else{
			c++;
			aa[ a[i] ] = max( aa[a[i]],c );
		}
	}
	c=1;
	for( int i=0;i<n;i++ ){
		if( a[i]!=a[i+1] ){
			c=1;
			aa[ b[i] ] = max( bb[b[i]],c );
		}
		else{
			c++;
			bb[ b[i] ] = max( bb[b[i]],c );
		}
	}

	int mx=0;
	for( int i=1;i<=mxxxx; i++ ){
		mx = max( aa[i]+bb[i], mx );
	}

	cout<<mx<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
