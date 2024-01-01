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

const int SZ = 10E6 ;
const int prSZ = 10E3 ;
int ind = 1 ;
vector<int> prime ;
vector<int> primes(prSZ+2) ;
bool check[SZ] = {false} ;



void sieve(){
	for( int i=3 ; i<=prSZ ; i+=2 ){
		if( check[i]==false ){
			for( int j=i*i ; j<=SZ ; j+= i+i ){
				check[j] = true ;
			}
		}
	}

	prime.pb(2);
	for( int i=3 ; i<=SZ ; i+=2 ){
		if( check[i]==false )
			prime.pb(i) ;
	}
}

void divisor(){

	for( int k = 28 ; k<prSZ ; k++ ){

		int n = k ;	int nn = sqrt(n) ;	int c=0 ;

		for( int i=0 ; prime[i]<=nn && i<1000 ; i++ ){
			if( n%prime[i]==0 ){
				c++;
				while( n%prime[i]==0 ){
					n /= prime[i] ;
				}
			}
		}
		if(n>1){
			c++;
		}
		if( c==3 ){
			primes[ind++] = k ;
		}
	}
}

void pipra(){

	// int n;	cin>>n;
	// cout<< primes[n] <<endl;

	for( int i=0 ; i<1000 ; i++ ){
		cout<<primes[i]<<endl;
	}

}

int32_t main(){
	ios;
	sieve();
	divisor();

	int tt;	cin>>tt;
	while(tt--)
		pipra();
}
