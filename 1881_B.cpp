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
	vi v(3);
	for( int &x: v)	cin>>x;

	sort(v.begin(),v.end());

	if( v[2]%v[0]!=0 || v[1]%v[0]!=0 ){
		no;
		return;
	}

	int c = 0 ;
	c += v[2]/v[0];
	c-=1;
	c += v[1]/v[0];
	c-=1;

	if( c>3 ){
		no;
		return;
	}

	yes;

}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}

// YES
// YES
// NO
// NO
// YES
// YES
// NO
// YES
// NO
// NO
// YES
// YES
// NO
// YES
// NO
