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

bool is_valid( int k, int p ){
	for( int i=0;i<31;i++ ){
		if( p>>i & 1 ){
			if( !(k>>i & 1) ){
				return false;
			}
		}
	}
	return true;
}

void pipra(){
	int n,k;	cin>>n>>k;
	vector<vi> v(3,vi(n)) ;

	fori(i,3){
		for(auto &x : v[i])		cin>>x;
	}

	int lagbe = 0 ;

	fori(i,3){
		fori(j,n){
			if( is_valid( k, v[i][j]) ){
				lagbe |= v[i][j] ;
			}
			else{
				break;
			}
		}
	}
	(lagbe == k) ? yes : no ;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
