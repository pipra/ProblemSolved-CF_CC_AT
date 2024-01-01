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
	int even = 0 ,indx=-1 ;
	int n=s.size();

	fori( i,n ){
		if( (int)s[i] %2==0 ){
			even++;
			indx = i ;
		}
	}
	if( even==0 ){
		cout<<-1<<endl;
		return;
	}
	if( even==1 ){
		swap( s[indx] , s[n-1] );
		cout<<s<<endl;
		return;
	}

	bool c=true ;
	fori(i,n-1){
		if( int(s[i])%2==0 && s[i]<s[n-1] ){
			swap( s[i],s[n-1] );
			c = false ;
			break;
		}
	}
	if( c ){
		swap( s[indx],s[n-1] );
	}
	cout<<s<<endl;
	// cout<<even<<endl;
}

int32_t main(){
	ios;
		pipra();
}
