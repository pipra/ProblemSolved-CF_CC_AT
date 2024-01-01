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
	vector<int> v(n);
	int i=1, one=-1 , two=-1, nn=-1 ;

	for( int &x :v){
		cin>>x;
		if(x==1)		one = i;
		else if(x==2)	two = i ;
		else if(x==n)	nn = i;
		i++;
	}

	if( nn<min(one,two) ){
		cout<< nn <<" "<< min(one,two)<<endl;
	}
	else if( nn>max(one,two) ){
		cout<< nn <<" "<< max(one,two)<<endl;
	}
	else{
		cout<<one<<" "<<two<<endl;
	}

}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
