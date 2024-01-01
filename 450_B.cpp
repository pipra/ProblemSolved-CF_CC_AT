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
#define M 1000000007

void pipra(){
	ll f1,f2;	cin>>f1>>f2;
	ll n;	cin>>n;
	ll res = 0;
	if(n%6==1){
		res = (f1+M) % M;
	}
	else if(n%6==2){
		res = (f2+M) % M;
	}
	else if( n%6==3 ){
		res = ( (f2%M - f1%M) + M )%M ;
	}
	else if( n%6==4 ){
		res = ( ((-f1)%M) + M )%M ;
	}
	else if( n%6==5 ){
		res = ( ((-f2)%M) + M )%M ;
	}
	else if( n%6==0 ){
		res = ( (f1%M - f2%M) + M )%M ;
	}
	cout<<(res+M)%M<<endl;
}

int32_t main(){
	ios;
		pipra();
}
