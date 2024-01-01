#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define fori(i,n) for(int i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define endl "\n"
#define  ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int M = 1000000007 ;

vector<vector<int> > multiply( vector<vector<int> > &a , vector<vector<int> > &b ){

	int n = a.size() ;
	vector<vector<int> > ans(n,vector<int>(n,0)) ;

	for( int i=0;i<n;i++ ){
		for( int j=0;j<n;j++ ){
			for( int k=0;k<n;k++ ){
				ans[i][j] += (a[i][k] * b[k][j])%M ;
				ans[i][j] %=M;
			}
		}
	}

	return ans ;

}


vector<vector<int> > matrix_Exponentiation( vector<vector<int> > &a , int n ){

	if( n==0 ){
		int sz = a.size() ;
		vector<vector<int> > ans (sz,vector<int>(sz,0));
		for( int i=0;i<sz;i++ ){
			ans[i][i] = 1 ;
		}
		return ans ;
	}
	if( n==1 ){
		return a ;
	}


	vector<vector<int> > temp = matrix_Exponentiation( a, n/2 ) ;

	vector<vector<int> > ans = multiply( temp,temp ) ;

	if( n&1 )	ans = multiply( ans , a ) ;

	return ans ;

}

void pipra(){

	int n;	cin>>n;
	vector<vector<int> > a(2,vector<int>(2,0)) ;
	a[0][0] = a[1][0] = a[0][1] = 1 ;
	a[1][1] = 0 ;

	vector<vector<int> > ans = matrix_Exponentiation( a , n ) ;

	cout<< ans[0][1] <<endl ;

}

int32_t main(){
	ios;
		pipra();
}
