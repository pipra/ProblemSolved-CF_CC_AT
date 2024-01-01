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
	vector< vector<char> > vv(10) ;
	for( int i=0;i<10;i++ ){
		for( int j=0;j<10;j++ ){
			char ch;	cin>>ch;
			vv[i].pb(ch);
		}
	}
	int ans = 0;
	for( int i=0;i<10;i++ ){
		for( int j=0;j<10;j++ ){
			if( vv[i][j]=='X' ){
				if( (i==1 || i==8) && (j<9 && j>0) || (j==1 || j==8) && (i<9 && i>0) )
					ans +=2;
				else if( (i==2 || i==7) && (j<8 && j>1) || (j==2 || j==7) && (i<8 && i>1) )
					ans +=3;
				else if( (i==3 || i==6) && (j<7 && j>2) || (j==3 || j==6) && (i<7 && i>2) )
					ans +=4;
				else if( (i==4 || i==5) && (j<6 && j>3) || (j==4 || j==5) && (i<6 && i>3) )
					ans +=5;
				else
					ans +=1;
			}
		}
		// cout<<endl;
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}
