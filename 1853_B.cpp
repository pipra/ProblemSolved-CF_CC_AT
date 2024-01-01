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
	int n,k;	cin>>n>>k;
	int ans = 0;
	for( int i=1;i<=n;i++ ){
		int first = i;
		int second = n;
		bool valid = true;

		for( int j=0;j<k-2;j++ ){
			int fx = first ;
			first = second -fx;
			second = fx;

			valid &= first<=second ;
			valid &= min(first,second)>=0 ;

			if(!valid)
				break;
		}
		if(valid)	ans++;
	}
	cout<<ans<<endl;
}

int32_t main(){
	ios;
    int tt; cin>>tt;
    while( tt-- )
		pipra();
}


// 4
// 0
// 1
// 1052
// 11571
// 0
// 1
// 0
