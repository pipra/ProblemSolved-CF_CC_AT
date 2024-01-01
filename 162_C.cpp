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

const int sz = 1000 ;
const int preSZ = 500 ;
bool check[sz+10] ;
int primes[preSZ] ; 

void sieve(){
	int sqrtN = sqrt(sz) ;
	for( int i=3; i<=sqrtN ; i+=2 ){
		if( check[i]==0 ){
			for( int j=i*i ; j<=sz ; j+= i<<1 ){
				check[j] = 1 ;
			}
		}
	}
	primes[0] = 2 ;
	for( int i=3 , j=1 ; i<=sz ; i+=2 ){
		if( check[i]==0 ){
			primes[j] = i ;
			j++;
		}
	}
}

void pipra(){
	int n;	cin>>n;
	sieve() ;
	vector<int> ans;
	int sqrtNum = sqrt(n);

	for( int i=0 ; primes[i]<=sqrtNum ; i++ ){
		if( n%primes[i]==0 ){
			while( n%primes[i]==0 ){
				ans.pb(primes[i]);
				n /= primes[i] ;
			}
		}
	}
	if( n>1 ){
		ans.pb(n);
	}
	auto it = ans.begin() ;
	for( ; it!=ans.end() ; it++ ){
		if( it==ans.end()-1 ){
			cout<<(*it)<<endl;
			continue;
		}
		cout<<(*it)<<"*";
	}
}

int32_t main(){
	ios;
		pipra();
}
