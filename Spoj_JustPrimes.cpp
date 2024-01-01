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

#define N 50002
bool check[N] ;

void sieve(){
	int sqrtN = sqrt(N) ;
	for( int i=3 ; i<=sqrtN ; i+=2 ){
		if( check[i]==0 ){
			for( int j=i*i ; j<=N ; j+=i<<1 ){
				check[j] = 1 ;
			}
		}
	}
}

void pipra(){
	// sieve();
	int res ;
	int n ;	cin>>n;
	if(n==1)	res = -1 ;
	else if(n==2)	res = 1 ;
	else if(n==4)	res = -1 ;
	else if(n==6)	res = -1 ;
	else if( n%2==1 && check[n]==0 )	res = 1 ;
	else if( n%2==1 && check[n-2]==0  )	res = 2 ;
	else if( n%2==1 && check[n]!=0 )	res = 3 ;
	else if( n%2==0 )	res = 2 ;
	else	res = -1 ;

	cout<<res<<endl;
}

int32_t main(){
	ios;
	sieve();
	int indx = 1 ;
	int tt;	cin>>tt;
	while(tt--){
		cout<<"Case "<< indx++ <<": ";
		pipra();
	}
}
