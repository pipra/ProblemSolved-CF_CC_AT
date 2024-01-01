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

void pipra(){
	int n;	cin>>n ;
	int a[n] , sum[n] , sm=0 ;
	for( int i=0;i<n;i++ ){
		cin>>a[i] ;
		sm += a[i] ;
		sum[i] = sm ;
	}
	int res = 0 ;
	map<int,bool> mp ;
	map<int,int> mm ;
	for( int i=0;i<n-1;i++ ){
		for( int j=i ; j<n-1 ; j++ ){

		}
	}
}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}
