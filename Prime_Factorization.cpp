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

const ll SZ = 1E6 ;
const ll prSZ = 8E4 ;

bool stat[SZ+10];
ll primes[prSZ];

void sieve(){

	ll sqrtN = sqrt((double)SZ);
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

void factor( ll n ){
	ll sqrtNum = sqrt((double)n) ;

	for( ll i=0 ; primes[i] && primes[i]<=sqrtNum ; i++ ){
		if( n%primes[i]==0 ){
			cout<<primes[i]<<endl;
			while( n%primes[i]==0 && n>1 ){
				n /= primes[i] ;
			}
		}
	}
	if( n>1 ){
		cout<< n <<endl;
	}
}

void pipra(void){
	sieve();
	ll n;	cin>>n;
	factor(n);	
}

int32_t main(){
	ios;
		pipra();
}
