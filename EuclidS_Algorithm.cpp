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

int gcd( int a , int b ){
	if(b==0)	return a;
	return gcd( b, a%b );
}

void pipra(){
	int a,b;	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
}

int32_t main(){
	ios;
		pipra();
}
