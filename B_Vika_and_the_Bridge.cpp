//PIPRA
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
#define pb push_back
#define po pop_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define Faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void solve(){
	int n,k;	cin>>n>>k;
	vi v(n);
	for( int &x : v )	cin>>x;
	
	vector<vi > vv(k+1) ;

	int i=1;
	for( int &x : v ){
		vv[x].pb( i ) ;
		i++;
	}
	int ans = n ;

	for( auto &xx : vv ){ 
		int nn = xx.size() ;
		vector<int> aa;

        if( nn==0 )     continue;
        if( nn>1 ){
            for( int i=0 ; i<nn-1 ; i++ ){
                aa.pb( xx[i+1]-xx[i]-1 );
            }
        }
        aa.pb(xx[0]-1) ;
        aa.pb(n-xx[nn-1]);

		int nnn = aa.size() ;
		sort( aa.begin() , aa.end() );
        int f = aa[nnn-1] , s_f = aa[nnn-2] ;
		ans = min( ans , max( s_f , f/2 ) );
	}

	cout<< ans <<endl;
}

int main(){
	//Code_by_Pipra
	Faster;
    int tt;     cin>>tt;
    while(tt--)
		solve();
	return 0;
}