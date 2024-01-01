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

	string s;	cin>>s;
	int run=0 , wicket=0;

	int n = s.size();

	for( int i=0 ; i<s.size(); i++ ){
		if( s[i]>='0' && s[i]<='6' ){
			run += s[i]-'0' ;
		}
		else if(s[i]=='W'){
			wicket++;
		}
	}

	int over = n/6 , k = n%6 ;

	cout<< over <<"."<< k <<" ";
	if( n>6 ){
		cout<<"Overs"<<" ";
	}
	else{
		cout<<"Over"<<" ";
	}


	cout<<run<<" ";
	if(run<=1){
		cout<<"Run"<<" ";
	}
	else{
		cout<<"Runs"<<" ";
	}


	cout<<wicket<<" ";
	if(wicket<=1){
		cout<<"Wicket."<<endl;
	}
	else{
		cout<<"Wickets."<<endl;
	}
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
