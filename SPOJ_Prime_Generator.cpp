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

// const ll SZ = 1E9 ;
// bool stat[SZ+10] ;

bool is_prime( int n ){
	int sqrtN = sqrt(n) ;
	for( int i=3 ; i<=sqrtN ; i+=2 ){
		if( n%i==0 ){
			return false;
		}
	}
	return true;
}

void pipra(){
	int s,e;	cin>>s>>e;
	if( s<=2 && e>=2){
		cout<<2<<endl;
		s=3;
	}
	s += s%2==0 ;
	for( ; s<=e ; s+=2 ){
		if( is_prime(s) ){
			cout<<s<<endl;
		}
	}
}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}
