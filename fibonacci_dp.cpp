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

int fibonacci( vector<int> &dp , int n ){
	if( n<=1 )	return n;

	if( dp[n]!=-1 )	return dp[n];

	dp[n] = fibonacci( dp,n-1 ) + fibonacci( dp , n-2 );
	return dp[n] ;
}

void pipra(){

	int n;	cin>>n;
	vector<int> dp(n+1,-1) ;
	cout<< fibonacci( dp,n ) <<endl;

}

int32_t main(){
	ios;
		pipra();
}
