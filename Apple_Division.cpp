#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main () {
	ll n;	cin>>n;
	ll a[n];
	ll sm = 0 , answer = INT_MAX ;

	for( int i=0;i<n;i++ ){
		cin>>a[i] ;
		sm += a[i] ;
	}

	for( int i=0 ; i< (1<<n) ;i++ ){
		ll tm = 0 ;
		for ( int j=0;j<n;j++ ){
			if( ((1<<j)&i)!=0 ){
				tm += a[j] ;
			}
		}
		answer = min ( answer , abs(tm-(sm-tm)) );
	}
	cout<< answer <<endl;

	return 0;
} 