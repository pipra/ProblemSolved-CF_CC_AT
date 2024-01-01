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
	int n;	cin>>n;
	int a[n] ; 
	for( int i=0;i<n;i++ ){
		cin>>a[i];
	}
	int mn = 1 ;
	for( int i=0;i<n;i++ ){
		// cout<<mn<<" ";
		if( a[i]==mn ){
			mn +=2 ;
		}
		else{
			mn +=1 ;
		}
		// cout<<mn<<endl;
	}
	cout<<mn-1<<endl;
}

int32_t main(){
	ios;
	int tt;	cin>>tt;
	while(tt--)
		pipra();
}
