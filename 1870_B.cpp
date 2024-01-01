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
	int n,m;	cin>>n>>m;
	vector<int> a(n),b(m);
	int XOR=0 , OR=0 ;

	for( int &x : a){
		cin>>x;
		XOR ^=x ;
	}
	for( int &x : b){
		cin>>x;
		OR |=x ;
	}
	//Check n even or odd
	//If n is even then xor always decrease
	if(n%2 & 1){
		cout<<XOR<<" "<< (XOR|OR)<<endl;
	}
	else{
		int mn=0;
		for( int i=0;i<31;i++ ){
			if( XOR & (1<<i) ){
				if( OR & (1<<i) )	continue;
				else	mn +=(1<<i) ;
			}
		}
		cout<< mn <<" " << XOR <<endl;
	}
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
