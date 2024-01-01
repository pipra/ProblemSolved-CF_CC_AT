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
 
const int SZ = 1E5 ;
const int prSZ = 1E4 ;
 
bool stat[SZ+10];
int primes[prSZ];
int kkk = 1;

 
void sieve(){
 
	int sqrtN = sqrt((double)SZ);
	for( ll i=3 ; i<=sqrtN ; i+=2 ){
		if( stat[i]==0 ){
			for( ll j=i*i ; j<=SZ ; j+= i<<1 ){
				stat[j] = 1 ;
			}
		}
	}
	primes[0] = 2 ;
	for( ll i=3 , j=1 ; i<=SZ ; i+=2 ){
		if( stat[i]==0 ){
			primes[j] = i ;
			j++;
		}
	}
 
}
 
void factor( int n , vector< vector<int> > &fac , int k ){

	int sqrtNum = sqrt((double)n) ;
 
	for( int i=0 ; primes[i] && primes[i]<=sqrtNum ; i++ ){
		if( n%primes[i]==0 ){
			fac[k].pb( primes[i] );
			while( n%primes[i]==0 && n>1 ){
				n /= primes[i] ;
			}
		}
	}

	if( n>1 ){
		fac[k].pb( n );
	}
	
}



void pipra(void){

	sieve();
	int n,k;	cin>>n>>k;
	int a[n];
	for( int i=0;i<n;i++ )		cin>>a[i];

	vector< vector<int> > fac(n);
	int ans = 0 ;

	for( int i=0;i<n;i++ ){
		factor( a[i] , fac , i );
	}



	for( int i=0;i<n-1;i++ ){
		int nn = fac[i].size();

		for( int j=0,kk;j<nn;j++ ){
			int c=1;

			for( kk=i+1 ; kk<n && c<k ; kk++ ){
				auto it = find(fac[kk].begin(), fac[kk].end(), fac[i][j] );
    			if (it != fac[kk].end()) {
        			c++;
    			}
			}

			if( c==k && (kk-i)!=k && kk<n ){
				ans = max(ans , kk-i );
			}
			else if( c==k && (kk-i)!=k && kk>=n ){
				ans = max( ans , kk-i-1 ) ;
			}
			
		}

	}
	cout<<"Case"<<" "<<kkk++<<":"<<" ";
	cout<< ans <<endl;


}



int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}