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

// int gcd(int a,int b){
// 	if(b==0)	return a;
// 	return gcd(b,a%b);
// }

const int SZ = 10000 ;
const int preSZ = 4500 ;
bool check[SZ+10] ;
int primes[preSZ] ;


void sieve(){
	int sqrtN = sqrt(SZ) ;
	for( int i=3;i<=sqrtN ; i+=2 ){
		if( check[i]==0 ){
			for( int j=i*i ; j<=sqrtN ; j+= i<<1 ){
				check[j] = 1 ;
			}
		}
	}
	primes[0] = 2 ;
	for( int i=3 , j=1 ; i<=SZ ; i+=2 ){
		if( check[i]==0 ){
			primes[j] = i ;
			j++;
		}
	}
}

void pipra(){
	int n;	cin>>n;
	sieve();

	int ans = n ;
	// cout<<ans<<endl;

	for( int i=0 ; primes[i] && primes[i]<=sqrt(n) ; i++ ){
		if( n%primes[i]==0 ){
			while( n%primes[i]==0 && n>1 ){
				n /= primes[i] ;
			}
			ans *= (primes[i]-1) ;
			ans /= primes[i];
			// cout<<ans<<endl;
		}
	}

	if(n>1){
		ans *= n-1 ;
		ans /= n ;
	}

	cout<< ans <<endl;
}

int32_t main(){
	ios;
		pipra();
}
